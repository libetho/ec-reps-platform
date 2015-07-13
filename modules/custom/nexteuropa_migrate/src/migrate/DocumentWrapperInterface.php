<?php

/**
 * @file
 * Contains \Drupal\nexteuropa_migrate\migrate\DocumentWrapperInterface.
 */

namespace Drupal\nexteuropa_migrate\migrate;

/**
 * Interface DocumentWrapperInterface.
 *
 * @package Drupal\nexteuropa_migrate\migrate
 */
interface DocumentWrapperInterface {

  /**
   * Get current document.
   *
   * Request is forwarded to Drupal\nexteuropa_migrate\DocumentInterface.
   *
   * @return \Drupal\nexteuropa_migrate\DocumentInterface
   *    Document object.
   */
  public function getDocument();

  /**
   * Get current document's available languages.
   *
   * Request is forwarded to Drupal\nexteuropa_migrate\DocumentInterface.
   *
   * @return array
   *    Document's available languages.
   */
  public function getAvailableLanguages();

  /**
   * Get current document's default language.
   *
   * Request is forwarded to Drupal\nexteuropa_migrate\DocumentInterface.
   *
   * @return string
   *    Document's default language.
   */
  public function getDefaultLanguage();

  /**
   * Set field values on current document for the specified language.
   *
   * Request is forwarded to Drupal\nexteuropa_migrate\DocumentInterface.
   *
   * @param string $language
   *    Lang code in ISO 639-1 format, falls back to current language if NULL.
   */
  public function setSourceValues($language = NULL);

}
