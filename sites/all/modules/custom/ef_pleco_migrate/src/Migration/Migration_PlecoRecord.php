<?php

namespace Drupal\ef_pleco_migrate\Migration;

class Migration_PlecoRecord extends \Migration {

  const EXPLODE_FIELDS = [
    'record_types' => 'Type',
    'platform_sectors' => 'Platform sector',
    'platforms' => 'Platform name',
    'platform_work_typologies' => 'Platform work typology',
    'countries' => 'Country',
    'keywords' => 'Keywords',
    'languages' => 'Language',
    'organisations' => 'Organisation',
    'methodologies' => 'Methodology',
  ];

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
      self::EXPLODE_FIELDS);

    $this->destination = new \MigrateDestinationNode(
      'pleco_record',
      [

      ]);


    $this->map = new \MigrateSQLMap(
      $this->machineName,
      [
        'ID' => [
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

    $taxomap = [];
    foreach (array_keys(self::EXPLODE_FIELDS) as $plural_source_field_name) {
      $taxomap['field_pleco_' . $plural_source_field_name] = $plural_source_field_name;
    }
    unset($taxomap['field_pleco_platform_work_typologies']);
    $taxomap['field_pleco_work_typologies'] = 'platform_work_typologies';

    foreach ($taxomap as $field_name => $plural_source_field_name) {
      $this->addFieldMapping($field_name, $plural_source_field_name);
    }

    $this->addFieldMapping('field_pleco_abstract', 'Abstract');
    $this->addFieldMapping('field_pleco_description', 'Description');
    $this->addFieldMapping('field_pleco_date', 'Date');
    $this->addFieldMapping('field_pleco_external_link', 'Link URL');
    $this->addFieldMapping('field_pleco_external_link:title', 'Link Label');
    $this->addFieldMapping('field_pleco_availability', 'Availability');


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
      ));

    $this->addUnmigratedSources(array_values(self::EXPLODE_FIELDS));

    $this->addUnmigratedSources(
      [
        'Id',
        'Author(s)',
        'Organisation type',
        'Publication specifications',
      ]);
  }

  private function getError() {
    return "
CREATE TABLE migrate_map_plecorecord (
  `sourceid1`  unsigned NOT NULL COMMENT 'Source ID', 
  `destid1` INT unsigned NULL DEFAULT NULL COMMENT 'ID of destination node', 
  `needs_update` TINYINT unsigned NOT NULL DEFAULT 0 COMMENT 'Indicates current status of the source row',
  `rollback_action` TINYINT unsigned NOT NULL DEFAULT 0 COMMENT 'Flag indicating what to do for this item on rollback', 
  `last_imported` INT unsigned NOT NULL DEFAULT 0 COMMENT 'UNIX timestamp of the last time this row was imported',
  `hash` VARCHAR(32) NULL DEFAULT NULL COMMENT 'Hash of source row data, for detecting changes',
  PRIMARY KEY (`sourceid1`)
) 
ENGINE = InnoDB
DEFAULT CHARACTER SET utf8
COMMENT 'Mappings from source key to destination key'";
  }

  /**
   * @param array $row
   *
   * @return bool
   */
  public function prepareRow($row) {
    foreach (self::EXPLODE_FIELDS as $plural_field => $source_field) {
      $row->$plural_field = explode(';', $row->$source_field);
    }
    return TRUE;
  }



}
