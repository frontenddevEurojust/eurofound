<?php

namespace Drupal\ef_pleco_migrate\Migration;

abstract class MigrationBase extends \Migration {

  /**
   * @param string $field_name
   *   Destination field name.
   * @param string|null $source_field
   *   Source field name.
   * @param string $source_migration
   *   Source migration machine name.
   */
  protected function addTermReferenceMapping($field_name, $source_field, $source_migration) {

    $this->addFieldMapping($field_name, $source_field)
      ->separator(';');

    $this->addFieldMapping($field_name . ':source_type', NULL);
    $this->addFieldMapping($field_name . ':create_term', NULL);
    $this->addFieldMapping($field_name . ':ignore_case', NULL);

    $this->dependencies[] = $source_migration;
  }

  /**
   * @param string $field_name
   *   Destination field name.
   * @param string|null $source_field
   *   Source field name.
   * @param string $text_format
   *   Text format id.
   */
  protected function addFulltextFieldMapping($field_name, $source_field, $text_format = 'filtered_html') {
    $this->addFieldMapping($field_name, $source_field);
    $this->addFieldMapping($field_name . ':format')->defaultValue($text_format);
    $this->addFieldMapping($field_name . ':language', NULL);
  }

  /**
   * @param string $field_name
   * @param string $source_field
   */
  protected function addDateFieldMapping($field_name, $source_field) {
    $this->addFieldMapping($field_name, $source_field);
    $this->addFieldMapping($field_name . ':timezone', NULL);
    $this->addFieldMapping($field_name . ':rrule', NULL);
    $this->addFieldMapping($field_name . ':to', NULL);
  }

  /**
   * @param string $field_name
   * @param string|null $source_field
   * @param string|null $title_source_field
   */
  protected function addLinkFieldMapping($field_name, $source_field, $title_source_field = NULL) {
    $this->addFieldMapping($field_name, $source_field);
    $this->addFieldMapping($field_name . ':title', $title_source_field);
    $this->addFieldMapping($field_name . ':attributes', NULL);
    $this->addFieldMapping($field_name . ':language', NULL);
  }

}
