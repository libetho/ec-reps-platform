<?php

/**
 * @file
 * NextEuropaMigrateTestArticlesMigrationTest.php
 */

namespace Drupal\nexteuropa_migrate\Tests;

use Drupal\nexteuropa_migrate\Document;

/**
 * Class NextEuropaMigrateTestArticlesMigrationTest.
 *
 * @package Drupal\nexteuropa_migrate\Tests
 */
class NextEuropaMigrateTestArticlesMigrationTest extends MigrateAbstractTest {

  /**
   * {@inheritdoc}
   */
  public function setUp() {
    parent::setUp();
    \Migration::getInstance('NextEuropaMigrateTestNews')->processImport();
    \Migration::getInstance('NextEuropaMigrateTestCategories')->processImport();
    \Migration::getInstance('NextEuropaMigrateTestArticles')->processImport();
  }

  /**
   * Testing Content migration.
   */
  public function testContentMigration() {
    $migration = \Migration::getInstance('NextEuropaMigrateTestArticles');

    foreach ($this->fixtures['articles'] as $id => $fixture) {
      $mapping_row = $migration->getMap()->getRowBySource(array('_id' => $id));

      $raw_document = $this->getDocument('articles', $id);
      $source = new Document($raw_document);

      $node = node_load($mapping_row['destid1']);
      foreach (array('en', 'fr') as $language) {
        $source->setCurrentLanguage($language);

        // Assert that title has been imported correctly.
        $this->assertEquals($source->getFieldValue('title'), $node->title_field[$language][0]['value']);

        // Assert that body has been imported correctly.
        $this->assertEquals($source->getFieldValue('abstract'), $node->body[$language][0]['value']);

        // Assert that list field has been imported correctly.
        foreach ($source->getFieldValue('list') as $key => $value) {
          $this->assertEquals($value, $node->field_migrate_test_text[$language][$key]['value']);
        }

        // Assert that date field has been imported correctly.
        $this->assertEquals($source->getFieldValue('date'), $node->field_migrate_test_dates[LANGUAGE_NONE][0]['value']);
      }

      // Assert that taxonomy term reference migration worked successfully.
      $category_ids = $source->getFieldValue('categories');
      foreach ($node->field_migrate_test_terms[LANGUAGE_NONE] as $key => $value) {
        $taxonomy_term_raw_document = $this->getDocument('categories', $category_ids[$key]);
        $taxonomy_term_source = new Document($taxonomy_term_raw_document);
        $taxonomy_term = taxonomy_term_load($value['tid']);
        $this->assertEquals($taxonomy_term_source->getFieldValue('name'), $taxonomy_term->name);
      }

      // Assert that entity reference field has been imported correctly.
      $news_ids = $source->getFieldValue('news');
      foreach ($node->field_migrate_test_references[LANGUAGE_NONE] as $key => $value) {
        $news_raw_document = $this->getDocument('news', $news_ids[$key]);
        $news_source = new Document($news_raw_document);
        $news_source->setCurrentLanguage($language);
        $news = node_load($value['target_id']);
        $this->assertEquals($news_source->getFieldValue('title'), $news->title_field[$language][0]['value']);
      }

      // Assert that images are imported correctly.
      foreach ($source->getFieldValue('images') as $key => $value) {
        $this->assertContains($node->field_migrate_test_images[$language][$key]['filename'], $value);
      }

      // Assert that image alt and title fields are imported correctly.
      foreach ($source->getFieldValue('image_alt_text') as $key => $value) {
        $this->assertEquals($value, $node->field_migrate_test_images[$language][$key]['alt']);
        $this->assertEquals($value, $node->field_migrate_test_images[$language][$key]['title']);
      }

      // Assert that files are imported correctly.
      foreach ($source->getFieldValue('files') as $key => $value) {
        $this->assertEquals($value, $node->field_migrate_test_files[$language][$key]['filename']);
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
    \Migration::getInstance('NextEuropaMigrateTestArticles')->processRollback();
    \Migration::getInstance('NextEuropaMigrateTestCategories')->processRollback();
  }

}
