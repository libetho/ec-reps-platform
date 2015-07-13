/*
 * custom javascript for the sub theme
 */

// every script put in that block will use jQuery 1.4.4
// add your code in the ready function if you want to be sure the page is fully loaded before execution
jQuery(function($) {
  $(document).ready(function() {  
	/** menu display management **/
	$('#menu-button').click(function(){
		$('.navbar-ex1-collapse').toggleClass('visible-ex1');
		$('.navbar-ex1-collapse').toggleClass('in');
	});
	/** remove default "search" word of the search box **/
	$('input.form-control').focusin(function(){
		var placeHolderValue = $(this).attr('placeholder');
		$(this).attr('placeholder','');
		$(this).focusout(function(){
			$(this).attr('placeholder',placeHolderValue);
		});
	});
	/** link for the footer FlexSlider **/
	$('.region-footer ul.slides a').click(function() {
	  window.open($(this).attr('href'));
	});
  });
});

// every script put in that block will use jQuery 1.7.1
// add your code in the ready function if you want to be sure the page is fully loaded before execution
(function($) {
  $(document).ready(function() {  
	
  });
});  