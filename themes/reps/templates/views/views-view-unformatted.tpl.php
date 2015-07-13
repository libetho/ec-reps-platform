<?php
/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php if (!empty($prefix[$id])): ?>
    <?php print $prefix[$id]; ?>
  <?php endif; ?>
  <div
    <?php if ($classes_array[$id]): ?> 
  	  <?php print ' class="' . $classes_array[$id] . '"';  ?> 
    <?php endif; ?>
  >
    <?php print $row; ?>
	<div class="clearfix"></div>
  </div>
  <?php if (!empty($suffix[$id])): ?>
    <?php print $suffix[$id]; ?>
  <?php endif; ?>
<?php endforeach; ?>
