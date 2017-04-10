<?php
/**
 * @file
 * Easy Social links template
 *
 * Available variables:
 * - $widgets array with Easy Social widget html markup.
 * - $widget_type int constant indicating widget type (horizontal or vertical).
 */
?>
<div class="easy_social_box clearfix <?php echo ($widget_type == EASY_SOCIAL_WIDGET_HORIZONTAL) ? 'horizontal' : 'vertical'; ?> easy_social_lang_<?php echo $lang; ?>">
  
<?php
  /* --- Count the number of widgets --- */
  
    $i = 0;
    $n = count($widgets);
  

  /* --- General classes --- */
  
    if($n === 4){

      $foundation_class = ' small-3 columns text-center';

    }

  ?>


  <?php foreach ($widgets as $name => $markup): ?>
    <?php
    if ($i++ === 0) {
      $class = ' first';
    } else if ($i === $n) {
      $class = ' last';
    } else {
      $class = ' ';
    }
    ?>

    <div class="easy_social-widget easy_social-widget-<?php echo $name; ?><?php echo $class . $foundation_class; ?>">
      
        <?php if($name == 'facebook'): ?>
          <span class="info-easy-social">Click to share this page to Facebook securely</span>
          <i class="fa fa-facebook-square"></i><p>
        <?php endif; ?>
        <?php if($name == 'twitter'): ?>
          <span class="info-easy-social">Click to share this page to Twitter securely</span>
          <i class="fa fa-twitter-square"></i><p>
        <?php endif; ?>
        <?php if($name == 'googleplus'): ?>
          <span class="info-easy-social">Click to share this page to Google+ securely</span>
          <i class="fa fa-google-plus-square"></i><p>
        <?php endif; ?>
        <?php if($name == 'linkedin'): ?>
          <span class="info-easy-social">Click to share this page to LinkedIn securely</span>
          <i class="fa fa-linkedin-square"></i><p>
        <?php endif; ?>

      
      <?php echo '<div class="easy-social-markup">' . $markup . '</div>'; ?>
    </div>
  <?php endforeach; ?>



</div> <!-- /.easy_social_box -->