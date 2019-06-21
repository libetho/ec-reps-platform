/**
 * @file
 * Ckeditor plugin file for tokenize media.
 */

(function ($) {
  CKEDITOR.plugins.add('tokenize_media', {
    init : function (editor) {
      var rules = {
        elements: {
          img: function (element) {
            element.forEach(function () {
              element.attributes.src = '[file:' + element.attributes['data-fid'] + ':url]';
            });
          }
        }
      }
      // It's good to set both filters - dataFilter is used when loading data and htmlFilter when retrieving.
      editor.dataProcessor.htmlFilter.addRules(rules);
      editor.dataProcessor.dataFilter.addRules(rules);
    }
  });
})(jQuery);
