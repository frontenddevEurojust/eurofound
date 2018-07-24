<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $display_submitted: whether submission information should be displayed.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *#
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>
<?php

  global $language;

//  drupal_add_js(drupal_get_path('theme', 'ef_car_acordion') .'/js/ef_car_acordion.js');


  //dpm($language);
  //dpm($node);
?>



<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
 <div class="car-container">
  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <?php if (!$page): ?>

      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>

    <?php endif; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <!--<?php if ($display_submitted): ?>
    <div class="posted">
      <?php if ($user_picture): ?>
        <?php print $user_picture; ?>
      <?php endif; ?>
      <?php print $submitted; ?>
    </div>
  <?php endif; ?> -->


    <div class="info"> <!-- ******* INFORMATION ABOUT THE CAR ******* -->

      <div class="car-countries row">
      <?php
          // *****National Contribution ********

          $car_country_names = array();
          foreach ($node->field_ef_national_contribution['und'] as $key => $value)
          {
              $paths[$key] = $value['entity']->path['alias'];
              $path_explode = explode("/", $paths[$key]);
              $car_country_explode = $path_explode[4];
              $car_country = explode('-', $car_country_explode);
              if(($car_country[0] == 'czech')||($car_country[0] == 'united')) {
              		$car_country_names[$key] = $car_country[0]." ".$car_country[1];
              }else{

              		$car_country_names[$key] = $car_country[0];
              }
              $car_country_names[$key] = ucwords($car_country_names[$key]);
              $countries[$key] = getNationalContributionCountry($value['entity']->field_ef_country['und'][0]['iso2']);


              $paths[$car_country_names[$key]] = $value['entity']->path['alias'];
              $countries[$key] = getNationalContributionCountry($value['entity']->field_ef_country['und'][0]['iso2']);
          }
          sort($car_country_names);
          if(isset($countries))
          {
            echo "<ul class='nc-list inline-list' style='margin-left: 0px; margin-right: 10px;'>";
            echo "<li class='firstl'> National Contribution: </li>";
            foreach ($countries as $key => $value) {
              echo "<li class='nc-lis'><a href='/".$paths[$car_country_names[$key]]."'>" ;
              //echo $value[0]->name;
              echo $car_country_names[$key];
              echo "</a></li>";
            }
            echo "</ul>";
            echo"<br>";
          }


      ?>
      </div>

      <div class="car-obser-theme row">
      <?php
        //******Observatory & Theme**********

        $observatory = $node->field_ef_observatory['und'][0]['taxonomy_term']->name;


        foreach ($node->field_ef_topic['und'] as $key => $value)
          {

              $topic[$key] =$value['taxonomy_term']->name;

          }


         if(isset($observatory))
          {

              echo "<ul class='th-list inline-list' style='margin-left: 0px; margin-right: 10px;'>";
              echo "<li class='obserli'>Observatory: ".$observatory."</li>";
 

               echo "<li class='firstl'>Topic: </li>";

              foreach ($topic as $key => $value) {

                echo "<li class='topic-lis'>" ;
                echo $value . ",";
                echo "</li>";

              }



               echo "</ul>";

          }


      ?>
      </div>

    <!--  <div class="car-topic row"> -->
      <?php
        //******Topic**********

   /*     foreach ($node->field_ef_topic['und'] as $key => $value)
          {

              $topic[$key] =$value['taxonomy_term']->name;

          } */

       /*  if(isset($topic))
          {

              echo "<ul class='topic-list inline-list' style='margin-left: 0px; margin-right: 10px;'>";
              echo "<li class='firstl'>Topic: </li>";

              foreach ($topic as $key => $value) {

                echo "<li class='nc-lis'>" ;
                echo $value . ",";
                echo "</li>";

              }

               echo "</ul>";

          }   */


      ?>
     <!-- </div> -->

      <div class="car-dop row">
      <?php
        //******Date of Publication**********

       if($node->status == 1){

        $dop = $node->published_at;
        $dopf = format_date($dop,"ef_date_format");

         if(isset($dopf))
          {

              echo "<ul class='dop-list inline-list' style='margin-left: 0px; margin-right: 10px;'>";
              echo "<li>Date of Publication: ".$dopf."</li>";
              echo "</ul>";

          }

        }
              echo"<br>";
              echo"<br>";
              echo"<br>";
      ?>
      </div>


    </div>
    <div class="car-data">
      <div class="car-summary row" style="margin-left: 0px; margin-right: 0px;">
          <?php
            //*************Summary or Body***************

            /******************ABOUT TABLE****************/
             $author = $node->field_ef_author[$language->language][0]['value'];
             $institution = $node->field_ef_institution[$language->language][0]['value'];

             echo"<div class='md_about right'>";

              echo "<div class='md_tit'>";
                echo"<h5>About</h5>";
              echo"</div>";

             echo "<div class='md_body row'>";

                echo "<div class='small-3 columns'>";
                   echo"Author: ";
                echo "</div>";

                echo "<div class='md_body_row small-9 columns'>";
                  echo $author;
                echo "</div>";

              echo"</div>";

              echo "<div class='md_body row'>";

                echo "<div class='small-3 columns'>";
                   echo"Institution: ";
                echo "</div>";

                echo "<div class=' md_body_row small-9 columns'>";
                    echo $institution;
                echo "</div>";

              echo"</div>";

             echo"</div>";

              /*************CAR DATA **************/
              echo"<div class='summary_body'>";
              //$summary = $node->body[$language->language][0]['value'];
              //dpm($summary);
              //echo $summary;
              print render($content['body']);
              echo "</div>";
          ?>
      </div>
    <!--  DOCUMENTS -->
    <?php print render($content['group_documents']); ?>
    <!-- END DOCUMENTS -->

  <?php
    print render($content['qrr']);
  ?>

  <?php if (!empty($content['field_tags']) && !$is_front): ?>
    <?php print render($content['field_tags']) ?>
  <?php endif; ?>

  <?php print render($content['links']); ?>
  <?php if(in_array('anonymous user', $user->roles) || in_array('administrator', $user->roles)): ?>
    <div class="ds-node-comments">
      <div class="ef-comment-toggler toggler">
        <span class="show-text">Useful? Interesting? Tell us what you think.</span>
        <span class="hide-text">Hide comments</span>
      </div>
      <?php print render($content['comments']); ?>
    </div>
  <?php endif; ?>
  </div>
 </div>
</article>
