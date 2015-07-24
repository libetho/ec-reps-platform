<?php
/**
 * @file
 * Code for the reps migrate feature.
 */

use Drupal\nexteuropa_migrate\migrate\MigrateItemJSON;
use Drupal\nexteuropa_migrate\migrate\MigrationAbstract;

/**
 * Class RepsMigrationAbstract.
 */
abstract class RepsMigrationAbstract extends MigrationAbstract {

  /**
   * Function getSourceKey.
   *   Get the source key of the Migrate class
   */
  public function getSourceKey() {
    return array(
      '_id' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => TRUE,
      ),
    );
  }

  /**
   * Constructor of the migrate class.
   *
   * @param string $migration_key
   *   Key identifying the folder containing the datas to migrate.
   * @param array $arguments
   *   properties of the migration class.
   */
  public function __construct($migration_key, $arguments) {

    parent::__construct($arguments);
    $module = $arguments['group_name'];
    $dir = drupal_get_path('module', $module) . '/data/' . $migration_key;

    if (!file_exists($dir . '/list.json')) {
      throw new \Exception("No list location has been specified, check README.txt for more information.");
    }

    $this->setSource(new MigrateSourceList(
      new MigrateListJSON($dir . '/list.json'),
      new MigrateItemJSON($dir . '/document-:id.json', array()),
      array()
    ));
  }

  /**
   * Implements Migration::complete() callback.
   *
   * @param object $entity
   *    Entity object.
   * @param \stdClass $source_row
   *    Source row, as expected by Migrate class.
   */
  public function complete($entity, \stdClass $source_row) {
    parent::complete($entity, $source_row);
    // Set the publication through workbench_moderation when enabled.
    if (isset($entity->workbench_moderation)) {
      workbench_moderation_moderate($entity, 'published');
    }
  }

}
