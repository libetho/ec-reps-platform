/**
 * @file
 * Ckeditor plugin file.
 */

(function ($) {
  CKEDITOR.plugins.add('reps_accordion_plugin', {
    init: function (editor) {
      // Utility functions.
      function repsWrapper(el) {
        if (el.getAttribute) {
          return el.getAttribute('class') == 'accordion';
        }
      };
      function repsPane(el) {
        if (el.getAttribute) {
          return el.getAttribute('class') == 'accordion-content';
        }
      };

      // Add single button.
      editor.ui.addButton('reps_accordion_plugin_button', {
        label: Drupal.t('Insert an Accordion'),
        command: 'repsAddAccordion',
        icon: this.path + 'images/button.png'
      });

      // Add CSS for edition state.
      var cssPath = this.path + 'accordion.css';
      editor.on('mode', function () {
        if (editor.mode === 'wysiwyg') {
          this.document.appendStyleSheet(cssPath);
        }
      });

      // Prevent nesting by disabling button.
      editor.on('selectionChange', function (evt) {
        if (editor.readOnly) {
          return;
        }
        var command = editor.getCommand('repsAddAccordion');
        var element = evt.data.path.lastElement && evt.data.path.lastElement.getAscendant(repsWrapper, true);
        if (element) {
          command.setState(CKEDITOR.TRISTATE_DISABLED);
        }
        else {
          command.setState(CKEDITOR.TRISTATE_OFF);
        }
      });

      var allowedContent = 'div h3 p(!accordion)';

      editor.addCommand('repsAddAccordion', {
        allowedContent: allowedContent,

        exec : function (editor) {
          // Create the wrapper div.
          var wrapper = new CKEDITOR.dom.element.createFromHtml('<div class="accordion"><h3>Accordion title</h3><div class="accordion-content"><p>New accordion content</p></div></div>');

          editor.insertElement(wrapper);
        }
      });
      editor.addCommand('repsAccordionTabBefore', {
        allowedContent: allowedContent,

        exec: function (editor) {
          var element = editor.getSelection().getStartElement();
          var newHeader = new CKEDITOR.dom.element.createFromHtml('<h3>New accordion title</h3>');
          var newContent = new CKEDITOR.dom.element.createFromHtml('<div class="accordion-content"><p>New accordion content</p></div>');
          if (element.getAscendant(repsPane, true)) {
            element = element.getAscendant(repsPane, true).getPrevious();
          }
          else {
            element = element.getAscendant('h3', true);
          }
          newHeader.insertBefore(element);
          newContent.insertBefore(element);
        }
      });
      editor.addCommand('repsAccordionTabAfter', {
        allowedContent: allowedContent,

        exec: function (editor) {
          var element = editor.getSelection().getStartElement();
          var newHeader = new CKEDITOR.dom.element.createFromHtml('<h3>New Accordion title</h3>');
          var newContent = new CKEDITOR.dom.element.createFromHtml('<div class="accordion-content"><p>New accordion content</p></div>');
          if (element.getAscendant('h3', true)) {
            element = element.getAscendant('h3', true).getNext();
          }
          else {
            element = element.getAscendant(repsPane, true);
          }
          newContent.insertAfter(element);
          newHeader.insertAfter(element);
        }
      });
      editor.addCommand('repsRemoveAccordionTab', {
        exec: function (editor) {
          var element = editor.getSelection().getStartElement();
          var a;
          if (element.getAscendant('h3', true)) {
            a = element.getAscendant('h3', true);
            a.getNext().remove();
            a.remove();
          }
          else {
            a = element.getAscendant(repsPane, true);
            if (a) {
              a.getPrevious().remove();
              a.remove();
            }
            else {
              element.remove();
            }
          }
        }
      });

      // Context menu.
      if (editor.contextMenu) {
        editor.addMenuGroup('repsAccordionGroup');
        editor.addMenuItem('repsAccordionTabBefore', {
          label: Drupal.t('Add accordion tab before'),
          icon: this.path + 'images/button.png',
          command: 'repsAccordionTabBefore',
          group: 'repsAccordionGroup'
        });
        editor.addMenuItem('repsAccordionTabAfter', {
          label: Drupal.t('Add accordion tab after'),
          icon: this.path + 'images/button.png',
          command: 'repsAccordionTabAfter',
          group: 'repsAccordionGroup'
        });
        editor.addMenuItem('repsRemoveAccordionTab', {
          label: Drupal.t('Remove accordion tab'),
          icon: this.path + 'images/button.png',
          command: 'repsRemoveAccordionTab',
          group: 'repsAccordionGroup'
        });

        editor.contextMenu.addListener(function (element) {
          var parentEl = element.getAscendant(repsWrapper, true);
          if (parentEl) {
            return {
              repsAccordionTabBefore: CKEDITOR.TRISTATE_OFF,
              repsAccordionTabAfter: CKEDITOR.TRISTATE_OFF,
              repsRemoveAccordionTab: CKEDITOR.TRISTATE_OFF
            };
          }
        });
      }
    }
  });
})(jQuery);
