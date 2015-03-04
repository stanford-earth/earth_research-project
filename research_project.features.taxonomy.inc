<?php
/**
 * @file
 * research_project.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function research_project_taxonomy_default_vocabularies() {
  return array(
    'research_category' => array(
      'name' => 'Research Category',
      'machine_name' => 'research_category',
      'description' => 'Most of our research involves the measurement of short- to intermediate-range structure in silicate and oxide materials, althoug',
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
