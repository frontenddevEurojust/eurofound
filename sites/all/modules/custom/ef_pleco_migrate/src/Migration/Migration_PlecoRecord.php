<?php

namespace Drupal\ef_pleco_migrate\Migration;

class Migration_PlecoRecord extends MigrationBase {

  // A Migration constructor takes an array of arguments as its first parameter.
  // The arguments must be passed through to the parent constructor.
  public function __construct($arguments) {
    parent::__construct($arguments);

    // With migrate_ui enabled, migration pages will indicate people involved in
    // the particular migration, with their role and contact info. We default the
    // list in the shared class; it can be overridden for specific migrations.
    /*
    $this->team = array(
      new \MigrateTeamMember('PLECO Import', 'ltaster@example.com',
        t('Product Owner')),
    );
    */

    // Individual mappings in a migration can be linked to a ticket or issue
    // in an external tracking system. Define the URL pattern here in the shared
    // class with ':id:' representing the position of the issue number, then add
    // ->issueNumber(1234) to a mapping.
    # $this->issuePattern = 'http://drupal.org/node/:id:';


    // -------------------------------------------------------------------------


    $this->description = 'Platform Economy Record nodes';


    $this->source = new \MigrateSourceCSV(
      // @todo Move this file out of web root.
      dirname(dirname(__DIR__)) . '/data/pleco-records.csv',
      // Leaving the columns empty will fill them from CSV header.
      [],
      [
        'header_rows' => 1,
        'length' => NULL,
        'delimiter' => ',',
        'enclosure' => '"',
        'escape' => '\\',
      ],
      // Additional fields that are computed.
      []);

    $this->destination = new \MigrateDestinationNode(
      'pleco_record',
      [

      ]);


    $this->map = new \MigrateSQLMap(
      $this->machineName,
      [
        'Id' => [
          # 'type' => 'int',
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => t('Source ID'),
        ],
      ],
      \MigrateDestinationNode::getKeySchema(),
      'default',
      [
        'track_last_imported' => TRUE,
      ]);

    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('title_field', 'Title');

    $this->addTermReferenceMapping('field_pleco_record_types', 'Type', 'pleco_record_type');
    $this->addTermReferenceMapping('field_pleco_platform_sectors', 'Platform sector', 'pleco_platform_sector');
    $this->addTermReferenceMapping('field_pleco_platforms', 'Platform name', 'pleco_platform');
    $this->addTermReferenceMapping('field_pleco_work_typologies', 'Platform work typology', 'pleco_platform_work_typology');
    $this->addTermReferenceMapping('field_pleco_countries', 'Country', 'pleco_country');
    $this->addTermReferenceMapping('field_pleco_keywords', 'Keywords', 'pleco_keyword');
    $this->addTermReferenceMapping('field_pleco_languages', 'Language', 'pleco_language');
    $this->addTermReferenceMapping('field_pleco_organisations', 'Organisation', 'pleco_organisation');
    $this->addTermReferenceMapping('field_pleco_methodologies', 'Methodology', 'pleco_methodology');
    $this->addTermReferenceMapping('field_pleco_availability', 'Availability', 'pleco_availability');

    $this->addFulltextFieldMapping('field_pleco_record_abstract', 'Abstract');
    $this->addFulltextFieldMapping('field_pleco_record_description', 'Description');
    $this->addFulltextFieldMapping('field_pleco_disclaimer', NULL);

    $this->addDateFieldMapping('field_pleco_date', 'Date');
    $this->addDateFieldMapping('field_pleco_publication_date', NULL);

    $this->addLinkFieldMapping('field_pleco_external_link', 'Link URL', 'Link Label');


    $this->addUnmigratedDestinations(
      array(
        'created', 'changed',
        'uid',
        'status',
        'promote', 'sticky',
        'tnid', 'language', 'translate',
        'comment',
        'revision', 'revision_uid', 'log',
        'is_new',
        'path', 'pathauto',
        'title_field:language',
        'totalcount', 'daycount', 'timestamp',
      ));

    # $this->addUnmigratedSources(array_values(self::EXPLODE_FIELDS));

    $this->addUnmigratedSources(
      [
        'Id',
        'Author(s)',
        'Organisation type',
        'Publication specifications',
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
   *   TRUE to process the row, FALSE to skip the row.
   */
  public function prepareRow($row) {

    foreach ($this->getTermAliasLookupMaps() as $source_field_name => $lookup) {

      if (!empty($row->$source_field_name)) {
        $terms = explode(';', $row->$source_field_name);
        $terms_map = [];
        foreach ($terms as $term) {
          $term_lowercase = strtolower($term);
          if (isset($lookup[$term_lowercase])) {
            $term = $lookup[$term_lowercase];
          }
          $terms_map[$term] = TRUE;
        }
        $row->$source_field_name = implode(';', array_keys($terms_map));
      }
    }

    return TRUE;
  }

  /**
   * @return string[][]
   *   Format: [$source_field_name][$alias] = $canonical
   */
  private function getTermAliasLookupMaps() {
    static $lookup_maps = NULL;

    if ($lookup_maps !== NULL) {
      return $lookup_maps;
    }

    $lookup_maps = [];
    foreach ([
      'field_pleco_methodologies' => [
        'Quantitative research' => ['Quantitative'],
        'Qualitative research' => ['Qualitative'],
      ],
    ] as $source_field_name => $aliasess) {

      $lookup = [];
      foreach ($aliasess as $canonical => $aliases) {
        foreach ($aliases as $alias) {
          $lookup[$alias] = $canonical;
        }
      }

      $lookup_maps[$source_field_name] = $lookup;
    }

    return $lookup_maps;
  }

}
