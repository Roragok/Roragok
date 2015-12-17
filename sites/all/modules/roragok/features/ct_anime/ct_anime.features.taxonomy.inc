<?php
/**
 * @file
 * ct_anime.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ct_anime_taxonomy_default_vocabularies() {
  return array(
    'anime_status' => array(
      'name' => 'Anime Status',
      'machine_name' => 'anime_status',
      'description' => 'Current Status of Anime',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
