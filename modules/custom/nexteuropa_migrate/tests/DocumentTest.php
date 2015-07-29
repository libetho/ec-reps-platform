<?php

/**
 * @file
 * Contains \Drupal\nexteuropa_migrate\Tests\DocumentTest.
 */

namespace Drupal\nexteuropa_migrate\Tests;

use Drupal\nexteuropa_migrate\Document;

/**
 * Class DocumentTest.
 *
 * @package Drupal\nexteuropa_migrate\Tests
 */
class DocumentTest extends MigrateAbstractTest {

  /**
   * Testing DocumentWrapperInterface methods.
   */
  public function testDocumentInterfaceMethods() {

    foreach ($this->fixtures['articles'] as $id => $filename) {

      $raw = $this->getDocument('articles', $id);
      $document = new Document($raw);

      // Get document ID.
      $this->assertEquals($document->getId(), $id);

      // Assert fields machine names.
      $machine_names = $document->getFieldMachineNames();
      foreach (array('title', 'images', 'image_alt_text', 'abstract') as $key) {
        $this->assertTrue(in_array($key, $machine_names));
      }

      // Assert fields values.
      $field_values = $document->getCurrentLanguageFieldsValues();
      foreach (array('title', 'images', 'image_alt_text', 'abstract') as $key) {
        $this->assertArrayHasKey($key, $field_values);
        $this->assertTrue(!empty($field_values[$key]));
      }

      // Assert default language.
      $this->assertEquals('en', $document->getDefaultLanguage());

      // Assert english title value.
      $this->assertContains('English title', $document->getFieldValue('title'));

      // Assert french title value.
      $document->setCurrentLanguage('fr');
      $this->assertEquals('fr', $document->getCurrentLanguage());
      $this->assertContains('French title', $document->getFieldValue('title'));

      // Assert available languages.
      $this->assertEquals(array('fr', 'en'), $document->getAvailableLanguages());
    }
  }

}
