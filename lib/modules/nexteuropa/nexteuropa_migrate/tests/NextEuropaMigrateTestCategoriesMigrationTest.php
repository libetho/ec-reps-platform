<?php

/**
 * @file
 * NextEuropaMigrateTestCategoriesMigrationTest.php
 */

namespace Drupal\nexteuropa_migrate\Tests;

use Drupal\nexteuropa_migrate\Document;

/**
 * Class NextEuropaMigrateTestCategoriesMigrationTest.
 *
 * @package Drupal\nexteuropa_migrate\Tests
 */
class NextEuropaMigrateTestCategoriesMigrationTest extends MigrateAbstractTest {

  /**
   * {@inheritdoc}
   */
  public function setUp() {
    parent::setUp();
    \Migration::getInstance('NextEuropaMigrateTestCategories')->processImport();
  }

  /**
   * Testing Content migration.
   */
  public function testContentMigration() {
    $migration = \Migration::getInstance('NextEuropaMigrateTestCategories');

    foreach ($this->fixtures['taxonomy_term'] as $id => $fixture) {
      $mapping_row = $migration->getMap()->getRowBySource(array('_id' => $id));

      $raw_document = $this->getDocument('taxonomy_term', $id);
      $source = new Document($raw_document);

      $taxonomy_term = taxonomy_term_load($mapping_row['destid1']);
      foreach (array('en', 'fr') as $language) {
        $source->setCurrentLanguage($language);

        // Assert that title has been imported correctly.
        $this->assertEquals($source->getFieldValue('name'), $taxonomy_term->name_field[$language][0]['value']);
      }
    }
  }

  /**
   * {@inheritdoc}
   */
  public function tearDown() {
    parent::tearDown();
    \Migration::getInstance('NextEuropaMigrateTestCategories')->processRollback();
  }

}
