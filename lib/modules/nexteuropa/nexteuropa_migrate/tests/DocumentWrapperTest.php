<?php

/**
 * @file
 * Test document wrapper Migration.
 */

namespace Drupal\nexteuropa_migrate\Tests;

use Drupal\nexteuropa_migrate\Document;
use Drupal\nexteuropa_migrate\migrate\DocumentWrapper;

/**
 * Class DocumentWrapper.
 *
 * @package Drupal\nexteuropa_migrate\Tests
 */
class DocumentWrapperTest extends MigrateAbstractTest {

  /**
   * Testing DocumentWrapperInterface methods.
   */
  public function testDocumentWrapperInterfaceMethods() {

    foreach ($this->fixtures['articles'] as $id => $filename) {

      $raw = $this->getDocument('articles', $id);
      $document = new Document($raw);

      $document_wrapper = new DocumentWrapper($document);

      // Assert document is wrapped correctly.
      foreach (array('title', 'images', 'image_alt_text', 'abstract') as $name) {
        $this->assertObjectHasAttribute($name, $document_wrapper);
      }

      // Assert english title value.
      $this->assertContains('English title', $document_wrapper->title);

      // Assert stored document object.
      $stored_document = $document_wrapper->getDocument();
      $this->assertEquals($document, $stored_document);

      // Assert available languages.
      $this->assertEquals(array('fr', 'en'), $document_wrapper->getAvailableLanguages());

      // Assert default language.
      $this->assertEquals('en', $document_wrapper->getDefaultLanguage());

      // Assert french title value.
      $document_wrapper->setSourceValues('fr');
      $this->assertContains('French title', $document_wrapper->title);
    }
  }

}
