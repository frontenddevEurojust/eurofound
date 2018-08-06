<?php

use Drupal\ef_pleco_components\EntityDisplay\EntityDisplay_EfCommentsWidget;
use Drupal\ef_pleco_components\EntityDisplay\EntityDisplay_EfRelatedEntities;
use Drupal\ef_pleco_components\EntityDisplay\EntityDisplay_ParagraphsTabs;
use Drupal\ef_pleco_components\EntityDisplay\EntityDisplay_PlecoRecordMetadataInline;
use Drupal\ef_pleco_components\EntityDisplay\EntityDisplay_PlecoRecordResource;

/**
 * Implements hook_ds_fields_info().
 *
 * @param string $entity_type
 *
 * @return array[][]
 *   Format: $[$entity_type][$field_name] = $ds_field_definition
 */
function ef_pleco_components_ds_fields_info($entity_type) {

  switch ($entity_type) {

    case 'node':
      $fields = _ef_pleco_components_ds_fields_info__node();
      break;

    case 'paragraphs_item':
      $fields = _ef_pleco_components_ds_fields_info__paragraphs_item();
      break;

    default:
      return [];
  }

  return [$entity_type => $fields];
}

/**
 * @return array[]
 */
function _ef_pleco_components_ds_fields_info__node() {

  $node_fields = [];

  $node_fields['ef_pleco_record_metadata_inline'] = [
    'title' => 'PLECO Record Metadata, inline',
    'field_type' => DS_FIELD_TYPE_FUNCTION,
    'ui_limit' => ['pleco_record|*'],
    /* @see _ef_pleco_components_record_metadata_inline() */
    'function' => '_ef_pleco_components_record_metadata_inline',
  ];

  $node_fields['ef_pleco_record_resources'] = [
    'title' => 'PLECO Record Resources',
    'field_type' => DS_FIELD_TYPE_FUNCTION,
    'ui_limit' => ['pleco_record|full'],
    /* @see _ef_pleco_components_record_resource() */
    'function' => '_ef_pleco_components_record_resource',
  ];

  $node_fields['ef_pleco_related_content_and_taxonomy'] = [
    'title' => 'PLECO Related content and taxonomy',
    'field_type' => DS_FIELD_TYPE_FUNCTION,
    'ui_limit' => ['*|full'],
    /* @see _ef_pleco_components_related_content_and_taxonomy() */
    'function' => '_ef_pleco_components_related_content_and_taxonomy',
  ];

  $node_fields['ef_pleco_related_dossiers'] = [
    'title' => 'PLECO Related dossiers',
    'field_type' => DS_FIELD_TYPE_FUNCTION,
    'ui_limit' => ['pleco_record|full'],
    /* @see _ef_pleco_components_related_dossiers() */
    'function' => '_ef_pleco_components_related_dossiers',
  ];

  $node_fields['ef_pleco_record_default_disclaimer'] = [
    'title' => 'PLECO Record Default Disclaimer',
    'field_type' => DS_FIELD_TYPE_FUNCTION,
    'ui_limit' => ['pleco_record|full'],
    /* @see _ef_pleco_record_default_disclaimer() */
    'function' => '_ef_pleco_record_default_disclaimer',
  ];

  return $node_fields;
}

/**
 * @return array[]
 */
function _ef_pleco_components_ds_fields_info__paragraphs_item() {
  $fields = [];

  $fields['ef_pleco_paragraphs_tabs'] = [
    'title' => 'PLECO paragraphs tabs',
    'field_type' => DS_FIELD_TYPE_FUNCTION,
    'ui_limit' => ['pleco_tabs|*'],
    /* @see _ef_pleco_components_paragraphs_tabs() */
    'function' => '_ef_pleco_components_paragraphs_tabs',
  ];

  return $fields;
}

/**
 * Display Suite field callback.
 *
 * @param array $field
 *   Display suite field definition.
 *
 * @return string
 */
function _ef_pleco_components_record_metadata_inline(array $field) {

  $entityDisplay = new EntityDisplay_PlecoRecordMetadataInline();

  $element = $entityDisplay->buildEntity(
    $field['entity_type'],
    $field['entity']);

  return drupal_render($element);
}

/**
 * Display Suite field callback.
 *
 * @param array $field
 *   Display suite field definition.
 *
 * @return string
 */
function _ef_pleco_components_record_resource(array $field) {

  $entityDisplay = new EntityDisplay_PlecoRecordResource();

  $element = $entityDisplay->buildEntity(
    $field['entity_type'],
    $field['entity']);

  return drupal_render($element);
}

/**
 * Display Suite field callback.
 *
 * @param array $field
 *   Display suite field definition.
 *
 * @return string
 */
function _ef_pleco_components_related_content_and_taxonomy(array $field) {

  $entityDisplay = EntityDisplay_EfRelatedEntities::relatedEntities();

  $element = $entityDisplay->buildEntity(
    $field['entity_type'],
    $field['entity']);

  $element['#type'] = 'ef_pleco_block_with_title';
  $element['#title'] = t('Related content');

  return drupal_render($element);
}

/**
 * Display Suite field callback.
 *
 * @param array $field
 *
 * @return string
 */
function _ef_pleco_components_related_dossiers(array $field) {

  $entityDisplay = EntityDisplay_EfRelatedEntities::relatedDossiers();

  $element = $entityDisplay->buildEntity(
    $field['entity_type'],
    $field['entity']);

  $element['#type'] = 'ef_pleco_block_with_title';
  $element['#title'] = t('Related dossiers');

  return drupal_render($element);
}

/**
 * @param array $field
 *
 * @return string
 */
function _ef_pleco_record_default_disclaimer(array $field) {
  return 'Eurofound aims to keep the information in this database up to date and accurate. If errors are brought to our attention, we will try to correct them. However, Eurofound bears no responsibility or liability whatsoever with regard to the accuracy or content of this database or of external links over which Eurofound services have no control and for which Eurofound assumes no responsibility.';
}

/**
 * @param array $field
 *
 * @return string
 */
function _ef_pleco_components_paragraphs_tabs(array $field) {

  $entityDisplay = EntityDisplay_ParagraphsTabs::create();

  $element = $entityDisplay->buildEntity(
    $field['entity_type'],
    $field['entity']);

  return drupal_render($element);
}
