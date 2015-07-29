<?php

/**
 * @file
 * Contains NextEuropaMigrateTestArticlesMigration class.
 */

/**
 * Class NextEuropaMigrateTestArticlesMigration.
 */
class NextEuropaMigrateTestArticlesMigration extends NextEuropaMigrateTestMigrationAbstract {

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments) {
    parent::__construct('articles', $arguments);

    // Requires taxonomy terms migration to run before content migration.
    $this->setHardDependencies(array(
      'NextEuropaMigrateTestNews',
      'NextEuropaMigrateTestCategories',
    ));

    $this->setMap(new MigrateSQLMap(
      $this->getMachineName(),
      $this->getSourceKey(),
      MigrateDestinationNode::getKeySchema()
    ));
    $this->setDestination(new MigrateDestinationNode('migrate_test'));

    // Entity translation requires that both title fields are mapped.
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('title_field', 'title');
    $this->addFieldMapping('body', 'abstract');
    $this->addFieldMapping('field_migrate_test_text', 'list');
    $this->addFieldMapping('field_migrate_test_dates', 'date');

    // Using an external migration source requires source_type to be set to tid.
    $this->addFieldMapping('field_migrate_test_terms', 'categories')->sourceMigration('NextEuropaMigrateTestCategories');
    $this->addFieldMapping('field_migrate_test_terms:source_type')->defaultValue('tid');

    // Entity reference field mapping.
    $this->addFieldMapping('field_migrate_test_references', 'news')->sourceMigration('NextEuropaMigrateTestNews');

    // Import images.
    $this->addFieldMapping('field_migrate_test_images', 'images');
    $this->addFieldMapping('field_migrate_test_images:file_replace')->defaultValue(FILE_EXISTS_REPLACE);

    // Images title and alt text.
    $this->addFieldMapping('field_migrate_test_images:alt', 'image_alt_text');
    $this->addFieldMapping('field_migrate_test_images:title', 'image_alt_text');

    // Files.
    $this->addFieldMapping('field_migrate_test_files', 'files');
    $this->addFieldMapping('field_migrate_test_files:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_migrate_test_files:source_dir')->defaultValue(drupal_get_path('module', 'nexteuropa_migrate_test') . '/fixtures/files');

    // Mapping default language is necessary for correct translation handling.
    $this->addFieldMapping('language', 'default_language');

    $this->addFieldMapping('promote')->defaultValue(FALSE);
    $this->addFieldMapping('status')->defaultValue(NODE_PUBLISHED);
  }

}
