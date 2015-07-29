<?php

/**
 * @file
 * Default theme implementation of main page.
 */
?><!DOCTYPE html>
<html>
<head>
<meta http-equiv="X-UA-Compatible" content="IE=edge" />
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>

</head>
<body class="<?php print $classes; ?> reps" <?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <div id="mainContainer">
	  <?php print $page_top; ?>
	  <?php print $page; ?>
	  <?php print $page_bottom; ?>
  <div>
</body>
</html>
