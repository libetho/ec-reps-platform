<?php

namespace Drupal\nexteuropa_migrate;

/**
 * Class Document.
 *
 * @package Drupal\nexteuropa_migrate
 */
class Document implements DocumentInterface {

  /**
   * Document object, as a result of a parsed JSON file.
   *
   * @var object
   *    Document object.
   */
  private $document = NULL;

  /**
   * Document current language.
   *
   * @var null
   *    Language code in ISO 639-1 format.
   */
  private $currentLanguage = NULL;

  /**
   * Document object constructor.
   *
   * @param object $document
   *    Raw document object.
   */
  public function __construct($document) {
    $this->document = $document;
  }

  /**
   * {@inheritdoc}
   */
  public function getId() {
    return $this->document->_id;
  }

  /**
   * {@inheritdoc}
   */
  public function getCurrentLanguageFieldsValues() {
    $result = new \stdClass();
    foreach ($this->getFieldMachineNames() as $field_name) {
      $result->{$field_name} = $this->getFieldValue($field_name);
    }
    $result->language = $this->getCurrentLanguage();
    return (array) $result;
  }

  /**
   * {@inheritdoc}
   */
  public function getFieldMachineNames() {
    $fields = (array) $this->document->fields;
    return array_keys($fields);
  }

  /**
   * {@inheritdoc}
   */
  public function getFields() {
    return $this->document->fields;
  }

  /**
   * {@inheritdoc}
   */
  public function parse() {

    $this->language = $this->getCurrentLanguage();
    $this->default_language = $this->getDefaultLanguage();
    foreach ($this->getFieldMachineNames() as $field_name) {
      $this->{$field_name} = $this->getFieldValue($field_name, $this->language);
    }
    return $this;
  }

  /**
   * {@inheritdoc}
   */
  public function getDefaultLanguage() {
    return $this->document->default_language;
  }

  /**
   * {@inheritdoc}
   */
  public function getAvailableLanguages() {
    return $this->document->languages;
  }

  /**
   * {@inheritdoc}
   */
  public function isAvailableLanguage($language) {
    return in_array($language, $this->getAvailableLanguages());
  }

  /**
   * {@inheritdoc}
   */
  public function getFieldValue($field_name) {
    $fields = $this->getFields();
    $language = $this->getCurrentLanguage();

    if (isset($fields->$field_name)) {
      $field = $fields->$field_name;
      $values = isset($field->{$language}) ? $field->{$language} : $field->{LANGUAGE_NONE};
      return (count($values) <= 1) ? array_shift($values) : $values;
    }
    else {
      throw new \Exception(t('Field not found: !field_name', array('!field_name' => $field_name)));
    }
  }

  /**
   * {@inheritdoc}
   */
  public function setCurrentLanguage($language = NULL) {
    if ($this->isAvailableLanguage($language)) {
      $this->currentLanguage = $language;
      return $this;
    }
    else {
      throw new \Exception(t('Trying to set a not-available language as current language: !language', array('!language' => $language)));
    }
  }

  /**
   * {@inheritdoc}
   */
  public function getCurrentLanguage() {
    if (!$this->currentLanguage) {
      $this->setCurrentLanguage($this->getDefaultLanguage());
    }
    return $this->currentLanguage;
  }

}
