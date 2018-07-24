<?php
/**
 * @file
 * erm_support_instruments.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function erm_support_instruments_taxonomy_default_vocabularies() {
  return array(
    'erm_support_instrument_fundings' => array(
      'name' => 'ERM support instrument fundings',
      'machine_name' => 'erm_support_instrument_fundings',
      'description' => 'ERM Support Instrument. Funding',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
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
    'erm_support_instrument_types' => array(
      'name' => 'ERM support instrument types',
      'machine_name' => 'erm_support_instrument_types',
      'description' => 'Phase and type of instrument',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
