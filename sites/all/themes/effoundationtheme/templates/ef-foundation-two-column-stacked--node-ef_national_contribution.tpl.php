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
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */


?>
<?php
  global $language;
  /*$pagina_anterior = $_SERVER['HTTP_REFERER'];
  dpm($pagina_anterior); */


?>

<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <div class="nc_info"> <!-- ******* INFORMATION ABOUT THE NC ******* -->


      <div class="nc-obser-theme row">
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

      <div class="nc-assign-contract row">

        <?php

           //****** Assign To & Contract**********
            $assign_to_user = $content['field_ef_assign_to_user'][0]['#markup'];
            $contract = taxonomy_term_load($content['field_ef_author_contract']['#items'][0]['tid']);
            $contract_name = $contract->name_field['und'][0]['value'];
            $country_group = $content['field_ef_assign_to_country_group'][0]['#markup'];


            if(!in_array('anonymous user', $user->roles)) {
              if(isset($assign_to_user)){
                echo "<ul class='th-list inline-list' style='margin-left: 0px; margin-right: 10px;'>";
                echo "<li class='obserli'>Assign To User: ".$assign_to_user."</li>";
              }
              if(isset($assign_to_user)){
                echo "<li class='obserli'>Contract: ".$contract_name." </li>";
              }
              if(isset($assign_to_user)){
                echo "<li class='obserli'>Country Group: ".$country_group." </li>";
              }
              echo "</ul>";

            }
        ?>

      </div>

      <div class="nc-dols-srdd row">

        <?php

           //****** Date Of Last Submission & Scheduled Record Delivery Date **********

            $dols = $node->workbench_moderation['current']->timestamp;
            $dolsf = format_date($dols,"ef_date_format");

           /* $srdd = $node->field_ef_report_delivery_date['und'][0]['value'];
            $srdd = format_date($node->created, 'custom', 'l\, F d\, Y');*/
            $srdd = $node->field_ef_report_delivery_date['und'][0]['value'];
            $srddc = $content['field_ef_report_delivery_date']['#items'][0]['value'];
            $timestamp = strtotime($srddc);    //Convert a date into a timestamp
            $srdd1 = format_date($timestamp, 'custom', 'l\, F d\, Y');

             /*IT HIDES IF USER = ANONYMUS USER*/
            if(isset($srdd) && !in_array('anonymous user', $user->roles)) {

              echo "<ul class='th-list inline-list' style='margin-left: 0px; margin-right: 10px;'>";
              echo "<li class='obserli'>Date of last submission: ".$dolsf." </li>";

               echo "<li>Scheduled record delivery date: ".$srdd1."</li>";

               echo "</ul>";

            }
        ?>

      </div>

      <div class="nc-dop row">
      <?php
        //******Date of Publication**********
      if($node->status == 1){
        $dop = $node->published_at;
        $dopf = format_date($dop,"ef_date_format");

         if(isset($dopf))
          {

              echo "<ul class='dop-list inline-list' style='margin-left: 0px; margin-right: 10px;'>";
              echo "<li>Published on: ".$dopf."</li>";
              echo "</ul>";

          }
        }
              echo"<br>";
              echo"<br>";
              echo"<br>";
      ?>
 </div>
    </div>
      <div class="nc_back_button">
          <?php
              $pagina_anterior = $_SERVER['HTTP_REFERER'];
              $host= $_SERVER["HTTP_HOST"];
              $url= $_SERVER["REQUEST_URI"];
              $pagina_actual = "http://" . $host . $url;

              if($pagina_anterior !== ""){

                    echo'<a href="'.$pagina_anterior.'"><button class="nc_bt_back" ><i class="fa fa-arrow-circle-o-left"></i>&nbsp;&nbsp;Back to working life country profiles</button></a>';

              }else{

                    echo'<a href="http://'.$host.'/observatories/eurwork/comparative-information"><button class="nc_bt_back" ><i class="fa fa-arrow-circle-o-left"></i>&nbsp;&nbsp;Back to working life country profiles</button></a>';

              }
          ?>
      </div>


      <div class="nc-data">
      <div class="nc-summary row" style="margin-left: 0px; margin-right: 0px;">
          <?php
            //*************Summary or Body***************

            /******************ABOUT TABLE****************/
             $author = $node->field_ef_author[$language->language][0]['value'];
             $institution = $node->field_ef_institution[$language->language][0]['value'];
             foreach ($node->field_ef_country['und'] as $key => $value)
            {
                $country[$key] = getNationalContributionCountry($value['iso2']);
            }

             echo"<div class='md_about right'>";

              echo "<div class='md_tit'>";
                echo"<h5>About</h5>";
              echo"</div>";

             echo "<div class='md_body row'>";

                echo "<div class='small-3 columns'>";
                   echo"Country: ";
                echo "</div>";

                echo "<div class='md_body_row small-9 columns'>";
                  foreach ($country as $key => $value) {
                    echo $value[0]->name;
                  }
                echo "</div>";

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
              print render($content['body']);
              echo "</div>";
          ?>
      </div>

    </div>

    <!--  Show group_documents fieldset  -->
    <?php print render($content['group_documents']); ?>

 <!-- <?php if ($display_submitted): ?>
    <div class="posted">
      <?php if ($user_picture): ?>
        <?php print $user_picture; ?>
      <?php endif; ?>
      <?php print $submitted; ?>
    </div>
  <?php endif; ?> -->

 <?php
     print render($content['qrr']);
  ?>

  <!--<?php if (!empty($content['field_tags']) && !$is_front): ?>
    <?php print render($content['field_tags']) ?>
  <?php endif; ?>

  <?php print render($content['links']); ?> -->
  <?php if(in_array('anonymous user', $user->roles) || in_array('administrator', $user->roles)): ?>
    <div class="ds-node-comments">
      <div class="ef-comment-toggler toggler">
        <span class="show-text">Useful? Interesting? Tell us what you think.</span>
        <span class="hide-text">Hide comments</span>
      </div>
      <?php print render($content['comments']); ?>
    </div>
  <?php endif; ?>


</article>
