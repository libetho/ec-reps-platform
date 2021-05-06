/**
 * @file
 * BSIM - REPS MEET US - 1.0 - Braije Christophe 2021.
 */

$wt.map.render({

  map: {
    background: ["osmec"],
    height: 600
  }

}).ready(function (map) {

  /**
   * REFERENCES.
   */

  var UEC = map._container.params;
  var markersLayer = [];
  var color = {
    "edc" : "#466eb4",
    "edic": "green",
    "team-europe" : "orange"
  };

  /**
   * MANDATORY VALUES.
   */

  if (!UEC.options) {
    console.log("WTINFO: Please define at least one country.");
    return;
  }

  /**
   * COUNTRIES.
   */

  if (UEC.options.country) {

    /**
     * ADD SINGLE COUNTRY.
     */

    map.countries(UEC.options.country, {

      insets: true,

      style: {
        fill : false,
        color: "#A755A4",
        clickable: false,
        weight: 4,
        opacity: 1
      }

    }).addTo(map);

    /**
     * FIT BOUNDS.
     *
     * Use the shadow API data from Webtools (smartcountries).
     * This solve the bounds with country and outer-most regions.
     */

    var ref = $wt.map.data.bounds[UEC.options.country.toUpperCase() + "1"] || $wt.map.data.bounds[UEC.options.country.toUpperCase()];
    var bounds = [[ref[0],ref[1]],[ref[2],ref[3]]];
    map.fitBounds(bounds);

    /**
     * UPDATE HOME BUTTON (reset view)
     */

    map.menu.update("home", {
      click: function () {
        if (bounds) {
          map.fitBounds(bounds);
          return false;
        }
      }
    });

  }

  /**
   * CHECK URL - REPR-1771.
   *
   * Alter contact point content before it's displayed.
   * Prepend protocol to url if none.
   * Remove fake xxx links.
   */

  var checkUrl = function (description) {
    description = description.replace('<p class="website-url"><a href="xxx">xxx</a></p>', '');
    var str = '<p class="website-url"><a href="';
    if (description.indexOf(str + 'http') < 0) {
      description = description.replace(str, str + 'https://');
    }
    return description;
  };

  /**
   * SHOW MARKER INFO.
   *
   * @param feature
   * @param layer
   */

  var each = function (feature, layer) {
    layer.on("click", function () {
      map.info.show("<p><b>" + feature.properties.name + "</b></p>" + checkUrl(feature.properties.description));
    });
  };

  /**
   * LEGEND.
   */

  var legend = function () {

    // Append the legend.
    map.legend({
      content: [
        '<h2>' + UEC.options.legend + '</h2>',
        '<div id="reps-checkbox"></div>'
      ].join(''),
      position: "topleft",
      class: 'bsim-legend'
    }).addTo(map);

    // Case if not data at all is loaded.
    if (markersLayer.length === 0) {
      map.ui.querySelector("#reps-checkbox").innerHTML = "Empty data";
      return;
    }

    // Create the form base from data.
    map.forms("#reps-checkbox", {

      groups   : [{

        fields: markersLayer.map(function (entry, index) {

          return {
            tag: "input",
            attributes: {
              type: "checkbox",
              name: "bsim-checkbox",
              value: index,
              checked: true,
              _class: "wt-toggle"
            },
            options: {
              label:  entry.config.label,
              legend: {
                icon: "marker",
                color: entry.config.color || color[entry.config.name]
              }
            },
            events: {
              init: function () {
                this.layer = entry.layer;
              },
              change: function () {
                if (this.checked) {
                  map.addLayer(this.layer);
                }
                else {
                  map.removeLayer(this.layer);
                }
              }
            }
          }

        })
      }]

    });

    // Create the tab below the map base from data.
    tab();

  };

  /**
   * TAB BELOW THE MAP.
   */

  var tab = function () {

    // Main tab container.
    var tabList = document.createElement("div");
    tabList.className = "bsim-tab";
    tabList.innerHTML = "...";
    $wt.after(tabList,map.ui);

    // Create tab buttons.
    var tabButtons = markersLayer.map(function (entry, index) {
      return $wt.template('<button id="{b}" role="tab" aria-controls="{t}" aria-selected="{s}">{n}</button>', {
        b: "bsim-tab-button-" + index,
        t: "bsim-tab-panel-" + index,
        s: (index === 0) ? "true" : "false",
        n: entry.config.tab
      })
    }).join('');

    // Create tab panel.
    var tabPanels = markersLayer.map(function (entry, index) {

      // Unfortunately there is no generic "compare" function in JavaScript.
      var compareStr = function (a, b) {
        a = a.toLowerCase();
        b = b.toLowerCase();
        return (a < b) ? -1 : (a > b) ? 1 : 0;
      };

      // Convert feature object to array of properties.
      var toArray = Object.keys(entry.features).map(function (key) {
        return entry.features[key].properties;
      });

      // Sort by alphabetic order.
      var toOrder = toArray.sort(function (a, b) {
        return compareStr(a.name, b.name);
      });

      // Convert to string.
      var toString = toOrder.map(function (key) {
        return "<div><p class='bsim-name'>" + key.name + "</p><div class='bsim-desc'>" + checkUrl(key.description) + "</div></div>";
      }).join('');

      return $wt.template('<div class="bsim-panel" role="tabpanel" aria-labelledby="{b}" id="{t}" {h}>{c}{l}</div>', {
        b: "bsim-tab-button-" + index,
        t: "bsim-tab-panel-" + index,
        h: (index === 0) ? "" : "hidden",
        c: (entry.config.title) ? "<h3>" + entry.config.title + "</h3>" : "",
        l: toString
      })

    }).join('');

    // Final output.
    tabList.innerHTML = $wt.template('<p class="bsim-tablist" role="tablist">{tabButtons}</p>{tabPanels}', {
      tabButtons: tabButtons,
      tabPanels: tabPanels
    });

    // Init aria accessibility base from aria attributes.
    $wt.aria.init(tabList);

  };

  /**
   * MARKERS.
   *
   * Throttle over data to inject markers on the map.
   */

  var throttle = function (x) {

    var cfg = UEC.options.data[x];

    if (!cfg) {
      legend();
      return;
    }

    $wt.getFile({

      // Format output expected.
      type: "json",

      // Otherwise use this url in 'production'.
      url: "https://webgate.test.ec.europa.eu/ednetwork-reporting/export/json/" + cfg.name + "?code=" + UEC.options.country,

      // On success: append markes on map.
      success: function (data) {

        // Only of at least one result.
        if (data.features && data.features.length) {

          // Append marker to the map.
          var mark = map.markers(data, {
            color: cfg.color || color[cfg.name],
            onEachFeature: each
          }).addTo(map);

          // Store in markersLayer for later usage (legend + tab).
          markersLayer.push({
            layer: mark,
            config: cfg,
            features: data.features
          });

        }

        // Process next data.
        x++; throttle(x);

      },

      // Case on error.
      error: function () {

        // Drop console message.
        console.log("Oups, something wrong to retrieve data: ", cfg.name);

        // Process next data.
        x++; throttle(x);

      }

    })

  };

  // No need but use for fibounds animation.
  setTimeout(function () {
    throttle(0);
  }, 250);

});
