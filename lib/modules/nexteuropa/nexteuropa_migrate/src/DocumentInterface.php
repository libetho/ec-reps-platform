<?php

/**
 * @file
 * DocumentInterface.php
 */

namespace Drupal\nexteuropa_migrate;

/**
 * Interface DocumentInterface.
 *
 * @package Drupal\nexteuropa_migrate
 */
interface DocumentInterface {

  /**
   * Get document internal id.
   *
   * @return string
   *    Returns document ID.
   */
  public function getId();

  /**
   * Return list of document's field machine names.
   *
   * @return array
   *    List of field machine names.
   */
  public function getFieldMachineNames();

  /**
   * Return actual list of document's field.
   *
   * @return array
   *    List of fields.
   */
  public function getFields();

  /**
   * Get list of field values for current language.
   *
   * @return array
   *    List of field values in current language.
   */
  public function getCurrentLanguageFieldsValues();

  /**
   * Get document default language.
   *
   * @return string
   *    Document's default language.
   */
  public function getDefaultLanguage();

  /**
   * Get list document's available languages.
   *
   * @return array
   *    Document's available languages.
   */
  public function getAvailableLanguages();

  /**
   * Get value of a specific field.
   *
   * @param string $field_name
   *    Document field name.
   *
   * @return mixed
   *    Field values in current language.
   *    If single-value field then it returns the only available value.
   *    If multi-value field then it returns the actual array of values.
   */
  public function getFieldValue($field_name);

  /**
   * Set current language for the document.
   *
   * @param string $language
   *    Language code in ISO 639-1 format.
   *
   * @return \Drupal\nexteuropa_migrate\DocumentInterface
   *    Set current language and return document object.
   */
  public function setCurrentLanguage($language = NULL);

  /**
   * Get document's current language.
   *
   * @return string
   *    Current language code in ISO 639-1 format.
   */
  public function getCurrentLanguage();

}
