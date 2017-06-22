<?php

/**
 * @file
 * Mapeditor field formatter functions.
 */

/**
 * Implements hook_field_formatter_info().
 */
function mapeditor_field_formatter_info() {
  $formatters = array();
  if (module_exists('geofield')) {
    $map_defaults = _mapeditor_map_defaults();
    $map = $map_defaults['map'];
    $settings = $map_defaults['settings'];
    $formatters['mapeditor_map'] = array(
      'label' => t('European Commission map'),
      'field types' => array('geofield'),
      'settings' => array(
        'tile_layer' => $map['map'],
        'height' => $settings['height'],
        'zoom' => $map['zoom'],
        'icon' => $settings['icon'],

      ),
    );
  }
  return $formatters;
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function mapeditor_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  $element = array();
  if ($display['type'] == 'mapeditor_map') {
    $element['tile_layer'] = _mapeditor_form_elements('tile_layer', $settings);
    $element['height'] = _mapeditor_form_elements('height', $settings);
    $element['zoom'] = _mapeditor_form_elements('zoom', $settings);
    $element['icon'] = _mapeditor_form_elements('icon', $settings);
  }
  return $element;
}

/**
 * Implements hook_field_formatter_settings_summary().
 */
function mapeditor_field_formatter_settings_summary($field, $instance, $view_mode) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  $summary = '';
  if ($display['type'] == 'mapeditor_map') {
    $summary = t('@height px, @map, @icon', array(
      '@height' => $settings['height']['height'],
      '@map' => $settings['tile_layer']['tile_layer'],
      '@icon' => $settings['icon']['icon'],
    ));
  }
  return $summary;
}

/**
 * Implements hook_field_formatter_view().
 */
function mapeditor_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
  $field_settings = $display['settings'];
  if (count($items) == 0) {
    return '';
  }
  else {
    switch ($display['type']) {
      case 'mapeditor_map':

        // Fetches map default definition and settings.
        $map_defaults = _mapeditor_map_defaults();
        $map = $map_defaults['map'];
        $settings = $map_defaults['settings'];
        $settings['popup'] = FALSE;
        $settings['popin'] = FALSE;
        $settings['show_popup'] = FALSE;
        $features = array();
        foreach ($items as $item) {
          $features[] = array(
            'type' => 'Feature',
            'properties' => array(),
            'geometry' => array(
              'type' => _mapeditor_geojson_type($item['geo_type']),
              'coordinates' => array(

                // Sets coordinates in GeoJSON standard: X,Y (lon, lat).
                round($item['lon'], 4),
                round($item['lat'], 4),
              ),
            ),
          );
        }
        $map['center'] = array_reverse($features[0]['geometry']['coordinates']);
        $map['zoom'] = $field_settings['zoom']['initialZoom'];
        $map['map'] = $field_settings['tile_layer']['tile_layer'];
        $settings['height'] = $field_settings['height']['height'];
        $settings['icon'] = $field_settings['icon']['icon'];

        // Builds the map.
        $mapeditor_map = new MapeditorMapBuild($map, $settings);
        $mapeditor_map->setCustomJs('map.js');
        $mapeditor_map->setFeatures($features);
        $element[0] = $mapeditor_map->build;
        break;
    }
    return $element;
  }
}
