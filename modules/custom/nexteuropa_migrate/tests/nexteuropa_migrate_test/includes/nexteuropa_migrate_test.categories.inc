<?php

/**
 * @file
 * Contains NextEuropaMigrateTestCategoriesMigration class.
 */

/**
 * Class NextEuropaMigrateTestCategoriesMigration.
 */
class NextEuropaMigrateTestCategoriesMigration extends NextEuropaMigrateTestMigrationAbstract {

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments) {
    parent::__construct('categories', $arguments);

    $this->setMap(new MigrateSQLMap(
      $this->getMachineName(),
      $this->getSourceKey(),
      MigrateDestinationTerm::getKeySchema()
    ));
    $this->setDestination(new MigrateDestinationTerm('migrate_test'));

    // Entity translation requires that both name fields are mapped.
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('name_field', 'name');

    // Mapping default language is necessary for correct translation handling.
    $this->addFieldMapping('language', 'default_language');
  }

}
