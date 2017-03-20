<?php

/**
 * @file
 * Contains \Drupal\mbp_sync\FileUrlTokenHandler.
 */

namespace Drupal\mbp_sync;

/**
 * Class UrlTokenHandler.
 *
 * @package Drupal\mbp_sync
 */
class FileUrlTokenHandler implements \Drupal\nexteuropa_token\TokenHandlerInterface {

  /**
   * {@inheritdoc}
   */
  public function getTokenSuffix() {
    return 'url';
  }

  /**
   * {@inheritdoc}
   */
  public function getTokenName($entity_id = 'ID') {
    return $entity_id . ':' . $this->getTokenSuffix();
  }

  /**
   * {@inheritdoc}
   */
  public function hookTokenInfoAlter(&$data) {
    $data['tokens']['file'][$this->getTokenName()] = array(
      'name' => t("!entity URL", array('!entity' => 'File')),
      'description' => t("Provide absolute internal URL for the specified entity."),
    );
  }

  /**
   * {@inheritdoc}
   */
  public function hookTokens($type, $tokens, array $data = array(), array $options = array()) {
    $replacements = array();

    if ($type == 'file') {
      foreach ($tokens as $name => $original) {
        $entity_id = $this->parseToken($original, 'entity_id');
        if ($entity_id) {
          $entity_info = entity_get_info($type);

          if (isset($entity_info['load hook']) && !empty($entity_info['load hook'])) {
            $entity = $entity_info['load hook']($entity_id);

            if ($entity = $entity_info['load hook']($entity_id)) {
              $replacements[$original] = file_create_url($entity->uri);
            }
            else {
              watchdog('Nexteuropa Tokens', 'Invalid token %token found.', ['%token' => $original], WATCHDOG_ERROR);
              $replacements[$original] = "";
            }
          }
        }
      }
    }
    return $replacements;
  }

  /**
   * Parse entity token, by default return entity ID.
   *
   * It also provides an additional $item to extract other token's parts.
   *
   * @param string $original
   *    Token string, in its original format, eg. [node:1:view-mode:full].
   * @param string $item
   *    Item to be extracted when parsing the token.
   *
   * @return string
   *    Extracted item.
   */
  protected function parseToken($original, $item = 'entity_id') {
    $matches = array();
    $regex = sprintf('/\[(%s)\:(\d*)\:%s\]/', 'file', $this->getTokenSuffix());
    preg_match_all($regex, $original, $matches);
    if ($item == 'entity_id') {
      return isset($matches[2][0]) && !empty($matches[2][0]) ? $matches[2][0] : '';
    }
  }
}

