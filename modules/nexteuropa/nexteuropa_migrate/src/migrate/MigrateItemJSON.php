<?php

namespace Drupal\nexteuropa_migrate\migrate;

use Drupal\nexteuropa_migrate\Document;

/**
 * Class MigrateItemJSON.
 *
 * @package Drupal\nexteuropa_migrate\migrate
 */
class MigrateItemJSON extends \MigrateItemJSON {

  /**
   * {@inheritdoc}
   */
  public function getItem($id) {
    $current_item = parent::getItem($id);
    $document = new Document($current_item);
    return new DocumentWrapper($document);
  }

}
