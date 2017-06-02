/**
 * @file
 * Provides custom functionality as input for Webtools' load.js.
 */

L.custom = {
  init: function (obj, params) {

    // Defines map height.
    obj.style.minHeight = map_height;

    // Creates map object.
    var map = L.map(obj, mapeditor_map);

    // Defines custom Icon.
    var mapeditorBaseIcon = L.Icon.extend({
      options: {
        // iconUrl: '//europa.eu/webtools/services/map/images/marker-icon-' + settings.icon + '.png',
        shadowUrl: '//europa.eu/webtools/services/map/images//marker-shadow.png',
        iconSize: [25, 41],
        shadowSize: [41, 41],
        iconAnchor: [20, 41],
        shadowAnchor: [20, 40],
        popupAnchor: [-3, -76]
      }
    });

    var mapeditorIcon = new mapeditorBaseIcon({iconUrl: '//europa.eu/webtools/services/map/images/marker-icon-' + settings.icon + '.png'});

    L.icon = function (options) {
      return new L.Icon(options);
    };

    // Defines tile layer.
    var tileLayer = L.wt.TileLayer([{
      "zoom": mapeditor_map.zoom,
      "map": mapeditor_map.map
    }]).addTo(map);

    // Adds GeoJson formatted features to map.
    // L.geoJson(features).addTo(map);
    L.geoJson(features, {
      onEachFeature: onEachFeature,
      pointToLayer: function (feature, latlng) {
        return L.marker(latlng, {icon: mapeditorIcon });
      }
    }).addTo(map);

    // Creates pop up event and defines popup content for each feature.
    function onEachFeature(feature, layer) {
      if (feature.properties && feature.properties.popupContent) {
        if (settings.popup) {
          layer.bindInfo(feature.properties.popupContent)
        }
        else {
          layer.bindPopup(feature.properties.popupContent);

        }
      }
    }

    // Fits the map to the available features.
    if (typeof settings.all_coordinates !== 'undefined') {
      map.fitBounds(settings.all_coordinates);
    }

    // Adds attribution if set.
    if (mapeditor_map.attributionControl == 1) {
      var gj = L.geoJson();
      gj.getAttribution = function () {
        return mapeditor_map.attribution;
      };
      gj.addTo(map);
    }

    // Processes next components.
    $wt._queue("next");

  }
};
