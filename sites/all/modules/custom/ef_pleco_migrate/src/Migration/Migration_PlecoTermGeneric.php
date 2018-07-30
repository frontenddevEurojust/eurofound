<?php

namespace Drupal\ef_pleco_migrate\Migration;

class Migration_PlecoTermGeneric extends MigrationBase {

  /**
   * Defines migrations for all PLECO taxonomy vocabularies.
   *
   * @return array[]
   *   Format: $[$migration_machine_name] = $migration_definition
   *
   * @see \ef_pleco_migrate_migrate_api()
   */
  public static function defineMigrations() {

    $migrations = [];
    foreach ([
      'pleco_availability',
      'pleco_country',
      'pleco_keyword',
      'pleco_language',
      'pleco_methodology',
      'pleco_organisation',
      'pleco_organisation_type',
      'pleco_platform',
      'pleco_platform_sector',
      'pleco_platform_work_typology',
      'pleco_record_type',
    ] as $vocabulary_machine_name) {
      $migrations[$vocabulary_machine_name] = [
        'class_name' => self::class,
        'vocabulary_machine_name' => $vocabulary_machine_name,
      ];
    }

    return $migrations;
  }

  /**
   * @param array $arguments
   *
   * @throws \MigrateException
   */
  public function __construct(array $arguments = []) {
    parent::__construct($arguments);

    # $migration_machine_name = $arguments['machine_name'];
    $vocabulary_machine_name = $arguments['vocabulary_machine_name'];

    /**
     * @var string[][] $csv_columns
     *   Format: $[] = [$source_field_machine_name, $source_field_label]
     */
    $csv_columns = [['name', 'name']];

    if ($vocabulary_machine_name === 'pleco_organisation') {
      $csv_columns[] = ['organisation_type', 'organisation_type'];
    }

    $dir = dirname(dirname(__DIR__)) . '/data/terms';
    $path = $dir . '/' . $vocabulary_machine_name . '.csv';

    // The file may have been modified or removed since the migration was registered.
    if (!is_file($path)) {
      throw new \MigrateException(
        format_string("Migration source file @path is not a file.", ['@path' => $path]));
    }
    if (!is_readable($path)) {
      throw new \MigrateException(
        format_string("Migration source file @path is not readable.", ['@path' => $path]));
    }

    $this->source = new \MigrateSourceCSV(
    // @todo Move this file out of web root.
      $path,
      // Leaving the columns empty will fill them from CSV header.
      $csv_columns,
      [
        'header_rows' => 0,
        'length' => NULL,
        'delimiter' => ',',
        'enclosure' => '"',
        'escape' => '\\',
      ],
      // Additional fields that are computed.
      []);


    $this->destination = new \MigrateDestinationTerm(
      $vocabulary_machine_name,
      ['allow_duplicate_terms' => FALSE]);

    $this->map = new \MigrateSQLMap(
      $this->machineName,
      array(
        'name' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Term name',
        ),
      ),
      \MigrateDestinationTerm::getKeySchema(),
      'default',
      [
        'track_last_imported' => TRUE,
      ]);


    $this->addFieldMapping('parent_name', NULL);
    $this->addFieldMapping('weight')->defaultValue(0);

    $this->addFieldMapping('path', NULL);
    if (module_exists('pathauto')) {
      $this->addFieldMapping('pathauto')->defaultValue(0);
    }

    $this->addFieldMapping('name', 'name');

    $this->addFieldMapping('description', NULL);
    $this->addFieldMapping('format')->defaultValue('filtered_html');

    // No term parent mapping.
    $this->addFieldMapping('parent', NULL);

    $this->addFieldMapping('name_field', 'name');

    $this->addFulltextFieldMapping('description_field', NULL);
    $this->addFieldMapping('description_field:summary', NULL);

    if ($vocabulary_machine_name === 'pleco_organisation') {
      $this->addTermReferenceMapping(
        'field_pleco_organisation_type',
        'organisation_type',
        'pleco_organisation_type');
    }

    $this->addUnmigratedDestinations(
      [
        'name_field:language',
        # 'description_field:summary',
      ]);

    // Ignore all metatag destination fields.
    foreach ($this->destination->fields() as $dest_field_machine_name => $dest_field_label) {
      if (0 === strpos($dest_field_machine_name, 'metatag_')) {
        $this->addUnmigratedDestinations([$dest_field_machine_name]);
      }
    }
  }

  /**
   * @param object $row
   *
   * @return bool
   */
  public function prepareRow($row) {
    if (!isset($row->name)) {
      return FALSE;
    }
    return TRUE;
  }
}
