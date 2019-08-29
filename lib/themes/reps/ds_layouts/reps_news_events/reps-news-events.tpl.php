<?php
/**
 * @file
 * Template for Display Suite Reps News & Events layout.
 */
?>

<div class="reps_news_events_wrapper">
  
    <?php if ($reps_ne_image): ?>
        <div class="reps_ne_image">
         <?php print $reps_ne_image; ?> 
        </div>
    <?php endif; ?>
   <?php if ($reps_ne_title): ?>
        <div class="reps_ne_title">
            <?php print $reps_ne_title; ?>
        </div>
   <?php endif; ?>
    <?php if ($reps_ne_body): ?>
        <div class="reps_ne_body">
            <?php print $reps_ne_body; ?>
        </div>
    <?php endif; ?>
    
    <?php if ($reps_ne_footer): ?>
        <div class="reps_ne_footer">
            <?php print $reps_ne_footer; ?> 
        </div>
    <?php endif; ?>

</div>
