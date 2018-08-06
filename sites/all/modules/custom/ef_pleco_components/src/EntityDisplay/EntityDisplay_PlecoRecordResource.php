<?php

namespace Drupal\ef_pleco_components\EntityDisplay;

use Drupal\renderkit\EntityDisplay\EntityDisplayBase;

class EntityDisplay_PlecoRecordResource extends EntityDisplayBase {

  /**
   * @param string $entity_type
   * @param object $entity
   *
   * @return array
   */
  public function buildEntity($entity_type, $entity) {

    if ([] === $link_element = $this->entityBuildLinkElement($entity_type, $entity)) {
      return [];
    }

    $element = [
      '#type' => 'container',
      'head' => [
        '#markup' => '<h2>' . t('Resource') . '</h2>',
      ],
      'intro' => [],
      'link' => $link_element,
    ];

    if (NULL !== $intro_text = $this->entityGetIntroText($entity_type, $entity)) {
      $element['intro']['#markup'] = '<p>' . $intro_text . '</p>';
    }
    else {
      unset($element['intro']);
    }

    $element['#attributes']['class'][] = 'ef-pleco-record-resource';
    $element['#attached']['css'][] = _ef_pleco_components_file('css', 'record_resource');

    return $element;
  }

  /**
   * @param string $entity_type
   * @param object $entity
   *
   * @return array
   */
  private function entityBuildLinkElement($entity_type, $entity) {

    if (NULL === $link_text = $this->entityGetLinkText($entity_type, $entity)) {
      return [];
    }

    if (NULL === $link_field_item = $this->entityGetLinkFieldItem($entity_type, $entity)) {
      return [];
    }

    $url = $link_field_item['url'];
    $link_options = $link_field_item;
    unset($link_options['url']);
    unset($link_options['title']);
    $link_options['attributes'] = [];
    // Don't confuse variables.
    unset($link_field_item);

    $link_options['attributes']['class'][] = '__link';
    $link_options['attributes']['target'] = '_blank';
    $link_options['html'] = TRUE;

    $link_html = '<i class="fa fa-external-link" aria-hidden="true"></i> ' . check_plain($link_text);

    return [
      '#theme' => 'link',
      '#text' => $link_html,
      '#path' => $url,
      '#options' => $link_options,
    ];
  }

  /**
   * @param string $entity_type
   * @param object $entity
   *
   * @return array|null
   */
  private function entityGetLinkFieldItem($entity_type, $entity) {

    foreach (field_get_items($entity_type, $entity, 'field_pleco_external_link') ?: [] as $item) {
      if (!empty($item['url'])) {
        return $item;
      }
    }

    return NULL;
  }

  /**
   * @param string $entity_type
   * @param object $entity
   *
   * @return string|null
   */
  private function entityGetLinkText($entity_type, $entity) {

    if (FALSE === $entity_label = entity_label($entity_type, $entity)) {
      return NULL;
    }

    return $entity_label;
  }

  /**
   * @param string $entity_type
   * @param object $entity
   *
   * @return null|string
   */
  private function entityGetIntroText($entity_type, $entity) {

    if (NULL === $record_type_name = $this->entityGetRecordTypeName($entity_type, $entity)) {
      return NULL;
    }

    return t(
      'Access the @record_type',
      ['@record_type' => $record_type_name]);
  }

  /**
   * @param string $entity_type
   * @param object $entity
   *
   * @return string|null
   */
  private function entityGetRecordTypeName($entity_type, $entity) {

    foreach (field_get_items($entity_type, $entity, 'field_pleco_record_types') ?: [] as $item) {
      if (empty($item['tid'])) {
        continue;
      }
      if (!$term = taxonomy_term_load($item['tid'])) {
        continue;
      }
      if (FALSE === $term_label = entity_label('taxonomy_term', $term)) {
        continue;
      }
      return $term_label;
    }

    return NULL;
  }
}
