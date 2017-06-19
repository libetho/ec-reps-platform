<?php

/**
 * @file
 * NextEuropaMigrateTestNewsMigrationTest.php
 */

namespace Drupal\nexteuropa_migrate\Tests;

use Drupal\nexteuropa_migrate\Document;

/**
 * Class NextEuropaMigrateTestNewsMigrationTest.
 *
 * @package Drupal\nexteuropa_migrate\Tests
 */
class NextEuropaMigrateTestNewsMigrationTest extends MigrateAbstractTest {

  /**
   * {@inheritdoc}
   */
  public function setUp() {
    parent::setUp();
    \Migration::getInstance('NextEuropaMigrateTestNews')->processImport();
  }

  /**
   * Testing Content migration.
   */
  public function testContentMigration() {
    $migration = \Migration::getInstance('NextEuropaMigrateTestNews');

    foreach ($this->fixtures['news'] as $id => $fixture) {
      $mapping_row = $migration->getMap()->getRowBySource(array('_id' => $id));

      $raw_document = $this->getDocument('news', $id);
      $source = new Document($raw_document);

      $node = node_load($mapping_row['destid1']);
      foreach (array('en', 'fr') as $language) {
        $source->setCurrentLanguage($language);

        // Assert that title has been imported correctly.
        $this->assertEquals($source->getFieldValue('title'), $node->title_field[$language][0]['value']);

        // Assert that body has been imported correctly.
        // @see: NextEuropaMigrateTestNewsMigration::prepareRow().
        $abstract = 'Processed ' . $source->getFieldValue('abstract');
        $this->assertEquals($abstract, $node->body[$language][0]['value']);
      }

      // Assert that default language has been imported correctly.
      $this->assertEquals($source->getDefaultLanguage(), $node->language);
    }
  }

  /**
   * {@inheritdoc}
   */
  public function tearDown() {
    parent::tearDown();
    \Migration::getInstance('NextEuropaMigrateTestNews')->processRollback();
  }

}
