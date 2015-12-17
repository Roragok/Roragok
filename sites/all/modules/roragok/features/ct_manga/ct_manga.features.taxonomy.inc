<?php
/**
 * @file
 * ct_manga.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ct_manga_taxonomy_default_vocabularies() {
  return array(
    'manga_status' => array(
      'name' => 'Manga Status',
      'machine_name' => 'manga_status',
      'description' => 'My status of manga.',
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
