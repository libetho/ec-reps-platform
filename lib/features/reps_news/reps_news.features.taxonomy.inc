<?php
/**
 * @file
 * reps_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function reps_news_taxonomy_default_vocabularies() {
  return array(
    'reps_news_categories' => (object) array(
      'name' => 'REPS News Categories',
      'machine_name' => 'reps_news_categories',
      'description' => 't',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 1,
      'language' => 'und',
      'i18n_mode' => 32768,
      'entity_type' => 'taxonomy_vocabulary',
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
