<?php
/**
 * @file
 * views_timelinejs_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function views_timelinejs_feature_taxonomy_default_vocabularies() {
  return array(
    'cwb_timeline_category' => array(
      'name' => 'CWB Timeline category',
      'machine_name' => 'cwb_timeline_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -4,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'cwb_timeline_level' => array(
      'name' => 'CWB Timeline Level',
      'machine_name' => 'cwb_timeline_level',
      'description' => 'Sectoral, Company ',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -3,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
