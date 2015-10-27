/**
 * @file
 * Custom javascript for the sub theme.
 */

// Every script put in that block will use jQuery 1.4.4
// Add your code in the ready function if you want to be sure the page is fully loaded before execution.
jQuery(function($) {
  $(document).ready(function() {
    $('.caret').click(function() {
      $(this).parents('.expanded').toggleClass('open');
    });
    $('.expanded a').click(function() {
      window.location = $(this).attr('href');
    });
    /* menu display management */
    $('#menu-button').click(function(){
      $('.navbar-ex1-collapse').toggleClass('visible-ex1');
      $('.navbar-ex1-collapse').toggleClass('in');
    });
    /* remove default "search" word of the search box */
    $('input.form-control').focusin(function(){
      var placeHolderValue = $(this).attr('placeholder');
      $(this).attr('placeholder','');
      $(this).focusout(function(){
        $(this).attr('placeholder', placeHolderValue);
      });
    });
    /* link for the footer FlexSlider */
    $('.region-footer ul.slides a').click(function() {
      window.open($(this).attr('href'));
    });
  });
});
