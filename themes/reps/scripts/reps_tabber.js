(function ($) {
  $(document).ready(function() {
	/**tabber initialization**/
	$('dl.ckeditor-tabber dd:odd:first, dl.ckeditor-tabber dd:even:first').addClass('active');
	$('dl.ckeditor-tabber dd:even').addClass('tab');
	$('dl.ckeditor-tabber dd:odd').addClass('panel');
	getHeightForTabber();
	/** tabber mechanism **/
	$('dl.ckeditor-tabber dd.tab').click(function(){
		$('dl.ckeditor-tabber dd.tab').removeClass('active');
		$(this).addClass('active');
		$('dl.ckeditor-tabber dd.panel').removeClass('active');
		$(this).next('.panel').addClass('active');
		getHeightForTabber();
	});
  });
  /** define height for tabber **/
  var getHeightForTabber = function(){
	$('dl.ckeditor-tabber').css('height',$('.panel.active').innerHeight()+$('.tab.active').innerHeight());
  }
})(jQuery);