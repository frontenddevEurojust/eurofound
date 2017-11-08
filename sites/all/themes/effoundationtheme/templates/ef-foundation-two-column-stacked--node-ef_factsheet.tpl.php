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
  
  function getSectorByNid($nid)
  {
    $sql = "SELECT n.nid as nid, n.title as title, nace.delta as delta, nace.field_ef_nace_tid as tid,
            h.parent, t.name
            from node n
            inner join field_data_field_ef_nace nace on nace.entity_id = n.nid
            inner join taxonomy_term_hierarchy h on h.tid = nace.field_ef_nace_tid
            inner join taxonomy_term_data t on t.tid = nace.field_ef_nace_tid
            where n.type = 'ef_factsheet'
            and  nid =:nid ";


    $result = db_query($sql, array(':nid' => $nid))->fetchAll();

    return $result;
  }


  function getNuts($nnode){

  $sql = "SELECT n.nid as nid, n.title as title, nuts.delta as delta, nuts.field_ef_nuts_tid as tid,
      h.parent, t.name
      from node n
      inner join field_data_field_ef_nuts nuts on nuts.entity_id = n.nid
      inner join taxonomy_term_hierarchy h on h.tid = nuts.field_ef_nuts_tid
      inner join taxonomy_term_data t on t.tid = nuts.field_ef_nuts_tid
      where n.type = 'ef_factsheet'
      and n.nid = :nid ";

  $result = db_query($sql, array(':nid' => $nnode))->fetchAll();

  return $result;

}

?>



<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
 <div class="fact-container">
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

    <!--FACTSHEET TEMPLATE -->

    <!--COMPANY/ORGANISATION-->
   <div class="ef_fs_container">
        <div class="ef_fs_cont row">
            <div class="content_factsheet large-12 columns">
                <div class="ef_fs_company row">
                    <span class="small-3 columns">Company/Organisation:</span>
                    <div class="ef_fs_comp_tit"><?php print render($node->title); ?></div>
                </div>

                <div class="ef_fs_geo_loc">

                    <div class="ef_fs_geo_tit row">
                      <h3 class="small columns">Geographic Location</h3>
                    </div>

                    <?php if (isset($node->field__ef_nuts_comp_country['und'][0]['value'])): ?>
                        <div class="ef_fs_country fs_indoor row">
                            <span class="small-3 columns">Country:</span>
                            <span class="fs_data"><?php
                              $nnode = $node->nid;
                              $res = getNuts($nnode);
                              $tamNuts = sizeof($res);
                              if($tamNuts > 1){
                                $cond = 0;
                              }
                              else{
                                $cond = 1;
                              }
                              $tid = $node->field_ef_nuts['und'][0]['tid'];
                              $parent = taxonomy_get_parents_all($tid);
                              $tam = sizeof($parent);
                              echo $parent[$tam-1]->name;


                             // print render($node->field__ef_nuts_comp_country['und'][0]['value']);
                            ?></span>
                        </div>
                     <?php endif; ?>

                     <?php if ($cond == 0): ?>
                        <?php if ($tamNuts > 1): ?>
                          <div class="ef_fs_region fs_indoor row">
                              <span class="small-3 columns">Region:</span>
                              <span class="fs_data">
                                <?php
                                    for($i = $tamNuts-1; $i >= 1; $i--)
                                    {
                                      echo $res[$i]->name;


                                      if($i != 1)
                                      {
                                        echo "; ";
                                      }

                                    }
                                ?>
                              </span>
                          </div>
                        <?php endif; ?>
                     <?php endif; ?>

                     <?php if ($cond == 1): ?>
                        <?php if ($tam > 1): ?>
                          <div class="ef_fs_region fs_indoor row">
                              <span class="small-3 columns">Region:</span>
                              <span class="fs_data">
                                <?php
                                    for($i = 0; $i <= $tam-2; $i++)
                                    {
                                      echo $parent[$i]->name;


                                      if($i != $tam-2)
                                      {
                                        echo "; ";
                                      }

                                    }
                                ?>
                              </span>
                          </div>
                        <?php endif; ?>
                     <?php endif; ?>

             <!--        <?php if ($tam > 2): ?>
                        <div class="ef_fs_region2 fs_indoor row">
                            <span class="small-3 columns"></span>
                            <span class="fs_data plus">
                              <?php
                                  echo $parent[$tam-3]->name;
                              ?>
                            </span>
                        </div>
                     <?php endif; ?>

                     <?php if ($tam > 3): ?>
                        <div class="ef_fs_region3 fs_indoor row">
                            <span class="small-3 columns"</span>
                            <span class="fs_data plus">
                              <?php
                                  echo $parent[$tam-4]->name;
                              ?>
                            </span>
                        </div>
                     <?php endif; ?>  -->

                     <?php if (isset($node->field_ef_affected_units['und'][0]['value'])): ?>
                        <div class="ef_fs_location fs_indoor row">
                            <span class="small-3 columns">Location of affected unit(s):</span>
                            <span class="fs_data"><?php print render($node->field_ef_affected_units['und'][0]['value']); ?></span>
                        </div>
                     <?php endif; ?>
                </div>

                <?php

                  $result = getSectorByNid($node->nid);
                  $tamnace = sizeof($result);
                  $tidsector = $result[$tamnace-1]->tid;
                  $parentsect = taxonomy_get_parents_all($tidsector);
                  $tamsect = sizeof($parentsect);
                  $sectorname = $parentsect[$tamsect-1]->name;

                ?>

                 <div class="ef_fs_comp">

                    <div class="ef_fs_com_tit row">
                      <h3 class="small columns">Company</h3>
                    </div>

                    <?php if (isset($sectorname)): ?>
                        <div class="ef_fs_sector fs_indoor row">
                            <span class="small-3 columns">Sector:</span>
                            <span class="fs_data"><?php print render($sectorname); ?></span>
                        </div>
                    <?php endif; ?>

                    <?php if ($tamsect > 1): ?>
                        <div class="ef_fs_subsector1 fs_indoor row">
                            <span class="small-3 columns"></span>
                            <span class="fs_data plus">
                              <?php
                                  echo $parentsect[$tamsect-2]->name;
                              ?>
                            </span>
                        </div>
                     <?php endif; ?>

                      <?php if ($tamsect > 2): ?>
                        <div class="ef_fs_subsector2 fs_indoor row">
                            <span class="small-3 columns"></span>
                            <span class="fs_data plus">
                              <?php
                                  echo $parentsect[$tamsect-3]->name;
                              ?>
                            </span>
                        </div>
                     <?php endif; ?>

                     <?php if ($tamsect > 3): ?>
                        <div class="ef_fs_subsector3 fs_indoor row">
                            <span class="small-3 columns plus"></span>
                            <span class="fs_data">
                              <?php
                                  echo $parentsect[$tamsect-4]->name;
                              ?>
                            </span>
                        </div>
                     <?php endif; ?>

                    <?php if (isset($node->field_ef_number_employed['und'][0]['value'])): ?>
                        <div class="ef_fs_num_emp fs_indoor row">
                            <span class="small-3 columns">Number Employed:</span>
                            <span class="fs_data"><?php print render($node->field_ef_number_employed['und'][0]['value']); ?></span>
                        </div>
                    <?php endif; ?>

                    <?php if (isset($node->field_ef_group['und'][0]['value'])): ?>
                        <div class="ef_fs_group fs_indoor row">
                            <span class="small-3 columns">Group:</span>
                            <span class="fs_data"><?php print render($node->field_ef_group['und'][0]['value']); ?></span>
                        </div>
                    <?php endif; ?>

                </div>

                 <div class="ef_fs_emp_eff">

                    <div class="ef_fs_emp_eff_tit row">
                      <h3 class="small columns">Employment Effects</h3>
                    </div>

                    <?php if (isset($node->field_ef_announcement_date['und'][0]['value'])): ?>
                        <div class="ef_fs_announ_date fs_indoor row">
                            <span class="small-3 columns">Announcement Date:</span>
                             <span class="fs_data">
                            <?php
                                $ad = $node->field_ef_announcement_date['und'][0]['value'];
                                print date("d-m-Y",strtotime($ad));
                            ?>
                            </span>
                        </div>
                    <?php endif; ?>

                    <?php if (isset($node->field_ef_job_reductions_min['und'][0]['value'])): ?>
                        <div class="ef_fs_planned_job_red_min fs_indoor row">
                            <span class="small-3 columns">Planned Job Reductions min:</span>
                            <span class="fs_data"> <?php print render($node->field_ef_job_reductions_min['und'][0]['value']); ?></span>
                        </div>
                    <?php endif; ?>

                    <?php if (isset($node->field_ef_job_reductions_max['und'][0]['value'])): ?>
                        <div class="ef_fs_planned_job_red_max fs_indoor row">
                            <span class="small-3 columns">Planned Job Reductions max:</span>
                            <span class="fs_data"><?php print render($node->field_ef_job_reductions_max['und'][0]['value']); ?></span>
                        </div>
                     <?php endif; ?>

                    <?php if (isset($node->field_ef_type_of_restructuring['und'][0]['taxonomy_term']->name)): ?>
                        <div class="ef_fs_type_rest fs_indoor row">
                            <span class="small-3 columns">Type of Restructuring:</span>
                            <span class="fs_data"><?php print render($node->field_ef_type_of_restructuring['und'][0]['taxonomy_term']->name); ?></span>
                        </div>
                     <?php endif; ?>

                    <?php if (isset($node->field_ef_employment_effect_start['und'][0]['value'])): ?>
                        <div class="ef_fs_emp_eff_start fs_indoor row">
                            <span class="small-3 columns">Employment Effect Start:</span>
                             <span class="fs_data">
                            <?php
                                $ees = $node->field_ef_employment_effect_start['und'][0]['value'];
                                print date("d-m-Y",strtotime($ees));
                            ?>
                            </span>
                        </div>
                    <?php endif; ?>

                    <?php if (isset($node->field_ef_foreseen_end_date['und'][0]['value'])): ?>
                        <div class="ef_fs_fore_end_date fs_indoor row">
                            <span class="small-3 columns">Foreseen End Date:</span>
                             <span class="fs_data">
                           <?php
                              $fed = $node->field_ef_foreseen_end_date['und'][0]['value'];
                              print date("d-m-Y",strtotime($fed));
                           ?>
                         </span>
                        </div>
                    <?php endif; ?>

                    <?php if (isset($node->field_ef_planned_job_creation['und'][0]['value'])): ?>
                        <div class="ef_fs_planned_job_creat fs_indoor row">
                            <span class="small-3 columns">Planned Job Creation:</span>
                            <span class="fs_data"><?php print render($node->field_ef_planned_job_creation['und'][0]['value']); ?></span>
                        </div>
                    <?php endif; ?>

                    <?php if (isset($node->field_ef_direct_dismissals['und'][0]['value'])): ?>
                        <div class="ef_fs_dir_dis fs_indoor row">
                            <span class="small-3 columns">Direct Dismissals:</span>
                            <span class="fs_data"><?php print render($node->field_ef_direct_dismissals['und'][0]['value']); ?></span>
                        </div>
                    <?php endif; ?>

                    <?php if (isset($node->field_ef_other_job_reduction['und'][0]['value'])): ?>
                        <div class="ef_fs_other_job_red_meas fs_indoor row">
                            <span class="small-3 columns">Other Job Reduction Measures:</span>
                            <span class="fs_data"><?php print render($node->field_ef_other_job_reduction['und'][0]['value']); ?></span>
                        </div>
                    <?php endif; ?>

                </div>

                <div class="ef_fs_addit_info">

                    <div class="ef_fs_addit_info_tit row">
                      <h3 class="small columns">Additional Information</h3>
                    </div>

                    <div class="ef_fs_add_inf row">
                       <div class="fs_additional_info"> <?php print ($node->field_ef_additional_information['und'][0]['value']); ?></div>
                    </div>

                    <div class="ef_fs_source fs_indoor row">
                       <?php if (isset($node->field_ef_fact_sources['und'][0]['field_ef_facsheet_media_date']['und'][0]['value'])): ?>
                            <span class="small-3 columns">Sources:</span>
                            <span class="fs_data">
                              <span class="fs_col_date">
                              <?php
                                  foreach ($node->field_ef_fact_sources['und'] as $key => $value) {

                                     $fmd = $value['field_ef_facsheet_media_date']['und'][0]['value'];
                                     print date("d-m-Y",strtotime($fmd));
                                     echo"<br>";
                                     echo"<br>";
                                  }
                              ?>
                             </span>
                             <span class="fs_col_name">
                              <?php
                                  foreach ($node->field_ef_fact_sources['und'] as $key => $value) {

                                    print($value['field_ef_factsheet_media']['und'][0]['taxonomy_term']->name);
                                    echo"<br>";
                                    echo"<br>";
                                  }
                              ?>
                              </span>
                             </span>
                      <?php endif; ?>

                    <?php if (isset($node->field_ef_sources_links['und'][0]['value'])): ?>
                        <div class="ef_fs_source_link fs_indoor row">
                            <span class="small-3 columns source_link">Sources Links:</span>
                            <div class="fs_data pro"><?php print render($node->field_ef_sources_links['und'][0]['value']); ?></div>
                        </div>
                    <?php endif; ?>
                </div>
                <?php if (isset($content['field_otheref_full_text_sources'][0]['#markup'])): ?>
                   <?php if ($GLOBALS['user']->roles[3] == 'administrator' || $GLOBALS['user']->roles[7] == 'Author' || $GLOBALS['user']->roles[9] == 'Quality Manager'):  ?>

                  <div class="ef_fs_source_pdf fs_indoor row">
                      <span class="small-3 columns">Other full text sources:</span>
                      <span class="fs_data">
                        <a target="_blank" href="<?php print ($content['field_otheref_full_text_sources'][0]['#markup']); ?>">
                          <?php print render($node->field_otheref_full_text_sources['und'][0]['filename']); ?>
                        </a>
                      </span>
                  </div>
                <?php endif; ?>
                 <?php endif; ?>
            </div>
        </div>

    </div>
 <!-- <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    print render($content);
  ?> -->

  <?php if (!empty($content['field_tags']) && !$is_front): ?>
    <?php print render($content['field_tags']) ?>
  <?php endif; ?>

  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>

 </div>
</article>
