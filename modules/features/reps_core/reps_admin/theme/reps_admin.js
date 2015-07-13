(function ($) {
  $(document).ready(function() {
    $('#-reps-admin-menu-edit tr').each(function() {
      $(this).find('td:last').addClass('tabledrag-hide');
      $(this).find('th:last').addClass('tabledrag-hide');
    });

    $('#-reps-admin-menu-edit input[type=text]').each(function() {
      $(this).attr('disabled', 'disabled');
      $(this).before('<span class="reps-edit">' + Drupal.t('Click me to edit!') + '</span>');
    });

    $('span.reps-edit').click(function() {
      if (!$(this).next().attr('disabled')) {
        $(this).next().attr('disabled', 'disabled');
        $(this).removeClass('reps-editable');
        $(this).text(Drupal.t('Click me to edit!'));
      }
      else {
        $(this).next().removeAttr('disabled');
        $(this).text(Drupal.t('You can edit this field'));
        $(this).addClass('reps-editable');
      }
    });
  });
})(jQuery);
