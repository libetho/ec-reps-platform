<?php
/**
 * @file
 * Code for the reps migrate menu feature.
 */

use Drupal\nexteuropa_migrate\migrate\MigrateItemJSON;
use Drupal\nexteuropa_migrate\migrate\MigrationAbstract;

/**
 * Class RepsMenuMigrationAbstract.
 */
abstract class RepsMenuMigrationAbstract extends RepsMigrationAbstract {

  /**
   * Constructor of the migrate class for Menus.
   *
   * @param string $migration_key
   *   Key identifying the folder containing the datas to migrate.
   * @param array $arguments
   *   Properties of the migration class.
   */
  public function __construct($migration_key, $arguments = array()) {
    parent::__construct($migration_key, $arguments);

    $this->addFieldMapping('link_path', 'link');
    $this->addFieldMapping('link_title', 'title');
    $this->addFieldMapping('weight', 'weight');
    $this->addFieldMapping('customized')->defaultValue('1');
    $this->addFieldMapping('language', 'default_language')->defaultValue('und');
    $this->addFieldMapping('plid', 'parent')->defaultValue(0);
  }

  /**
   * Set Translation for menu item.
   */
  public function complete($item, \stdClass $source_row) {
    $this->menuTranslations($item, $source_row);
  }

  /**
   * Save field translations for the specified menu item.
   *
   * @param \stdClass $item
   *   Item to translate.
   * @param \stdClass $source_row
   *   Source info for the translation.
   */
  public function menuTranslations(\stdClass $item, \stdClass $source_row) {
    foreach ($source_row->getAvailableLanguages() as $language) {
      if ($language != $source_row->getDefaultLanguage()) {
        $source_row->setSourceValues($language);
        $mlid = $item->mlid;
        $translation = $source_row->title;
        $name = 'menu:item:' . $mlid . ':title';
        i18n_string_translation_update($name, $translation, $language);
      }
    }
  }

  /**
   * Prepare Row.
   */
  public function prepareRow($row) {
    // Get the parent mlid.
    if (property_exists($row, 'parent')) {
      $item = $row->parent;
      $parent = _reps_core_menu_item_name_get($item, 'main-menu');

      if ($parent) {
        $row->parent = $parent;
      }
    }
    // Convert the alias to the node path.
    $node_path = _reps_core_menu_link($row->link);
    $row->link = $node_path;
  }

}

/**
 * Class RepsServicesMenuMigration.
 */
class RepsServicesMenuMigration extends RepsMenuMigrationAbstract {

  /**
   * Constructor of the migrate class for services menu.
   *
   * @param array $arguments
   *   Properties of the migration class.
   */
  public function __construct($arguments = array()) {
    parent::__construct('menu-reps-services', $arguments);

    $this->setMap(new MigrateSQLMap(
      $this->getMachineName(),
      $this->getSourceKey(),
      MigrateDestinationMenuLinks::getKeySchema()
    ));
    $this->addFieldMapping('menu_name')->defaultValue('menu-reps-services');
    $this->setDestination(new MigrateDestinationMenuLinks('menu-reps-services'));
  }

}

/**
 * Class RepsMainMenuMigration.
 */
class RepsMainMenuMigration extends RepsMenuMigrationAbstract {

  /**
   * Constructor of the migrate class for services menu.
   *
   * @param array $arguments
   *   Properties of the migration class.
   */
  public function __construct($arguments = array()) {
    parent::__construct('main-menu', $arguments);

    $this->setMap(new MigrateSQLMap(
      $this->getMachineName(),
      $this->getSourceKey(),
      MigrateDestinationMenuLinks::getKeySchema()
    ));

    $this->setDestination(new MigrateDestinationMenuLinks('main-menu'));
    $this->addFieldMapping('menu_name')->defaultValue('main-menu');
  }

}
