<?php

namespace Drupal\ef_pleco_components\EntityDisplay;

use Drupal\renderkit\EntityDisplay\EntityDisplayBase;

class EntityDisplay_PlecoRecordMetadataInline extends EntityDisplayBase {

  /**
   * Same as ->buildEntities(), just for a single entity.
   *
   * @param string $entity_type
   *   E.g. 'node' or 'taxonomy_term'.
   * @param object $entity
   *   Single entity object for which to build a render arary.
   *
   * @return array
   *
   * @see \Drupal\renderkit\EntityDisplay\EntityDisplayInterface::buildEntity()
   */
  public function buildEntity($entity_type, $entity) {

    $parts = [];

    // Publication date.
    module_load_include('ds_fields_info.inc', 'publication_date');
    $parts[] = publication_date_render_published_at_field(
      [
        'entity' => $entity,
        'formatter' => 'publication_date_ef_date_format',
      ]);

    // Content type ("Platform economy record")
    $parts[] = t('Platform economy record');

    foreach ([
      'field_pleco_platforms',
      'field_pleco_work_typologies',
      'field_pleco_record_types',
    ] as $field_name) {
      $field_element = field_view_field(
        $entity_type,
        $entity,
        $field_name,
        [
          'label' => 'hidden',
          'type' => 'ds_taxonomy_separator_localized',
          'settings' => array(
            'conditions' => array(),
            'taxonomy_term_link' => 0,
            'taxonomy_term_separator' => ', ',
          ),
        ]);

      $field_parts = [];
      foreach (element_children($field_element) as $field_item_delta) {
        $field_item_part = drupal_render($field_element[$field_item_delta]);
        if ('' === $field_item_part) {
          continue;
        }
        $field_parts[] = $field_item_part;
      }

      if ([] === $field_parts) {
        continue;
      }

      $parts[] = implode(', ', $field_parts);
    }

    foreach ($parts as &$part) {
      $part = '<span class="__item">' . $part . '</span>';
    }

    // Add a separator. This will be hidden, but it will appear in copy+paste.
    $separator = '<span class="__separator"> | </span>';

    $element = [
      '#type' => 'container',
      '#children' => implode($separator, $parts),
    ];

    $element['#attributes']['class'][] = 'ef-pleco-record-metadata-inline';
    $element['#attached']['css'][] = _ef_pleco_components_file('css', 'record_metadata_inline');

    return $element;
  }
}
