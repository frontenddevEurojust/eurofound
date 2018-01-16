<?php

/*
 *
 * Quality rating table
 *
 */

function ef_qrr_quality_rating($form, &$form_state) {
   drupal_page_is_cacheable(false);
   $form['filter'] = _ef_qrr_filter_form($form_state['build_info']['form_id']);
   $form['ratings'] = ef_qrr_ratings_table();
   $form['pager'] = array( '#theme' => 'pager');

   return $form;
}

/*
 *
 * Main form
 *
 */

function ef_qrr_main($form, &$form_state) {
   $form['index'] = array(
      '#type' => 'markup',
      '#markup' => t('Quality rating and reporting functions'),
   );

   return $form;
}

function ef_qrr_ratings_table() {

   // See http://passingcuriosity.com/2011/drupal-7-forms-tables/

   $ratings_form = array();

   $hdr_checkbox = array('#type' => 'checkbox', '#id' => 'select-all');

   $info_icon = '<div class="qrr-info"><img src="/'.drupal_get_path('module', 'ef_qrr').'/images/info.png"></img></div>';

   $header = array(array('data' => $hdr_checkbox), t('Title'), t('NID'),t('Type'), t('Author'), t('Revised by'), t('State'), t('Updated'), t('Rating').$info_icon, t('Reviewer comments'));

   $nids = _ef_qrr_selected_nodes('rating');

   $ratings_form = array(
      'table' => array(
         '#theme' => 'table',
         '#tree' => true,
         '#header' => $header,
      )
   );

   $form_weight=0;
   //Top Submit
    $ratings_form['download_2'] = array(
      '#id' => 'download',
      '#type' => 'submit',
      '#value' => t('Download report'),
      '#weight' => $form_weight++,
    );
    
     $ratings_form['bulk_2'] = array(
        '#id' => 'bulk_rating',
        '#type' => 'submit',
        '#value' => t('Bulk rating'),
        '#weight' => $form_weight++,
     );
     $ratings_form['update_2'] = array(
        '#id' => 'update',
        '#type' => 'submit',
        '#value' => t('Update ratings'),
        '#weight' => $form_weight++,
     );

   foreach ($nids as $nid => $vid) {

    ?>
      <script>
        window.addEventListener('load', 
            function(){

              jQuery("#show_coment_<?php echo $nid; ?>").change(function(){
                jQuery("#hidden_nid_<?php echo $nid; ?>").val(jQuery("#show_coment_<?php echo $nid; ?>").val())
                console.log(jQuery("#show_coment_<?php echo $nid; ?>").val())
              });

            },
             false )
      </script>

    
    <?php

      $node = node_load($nid,$vid);

      $fieldset = _ef_qrr_rating_fieldset($node, false, false);
      $checkbox = array('#type' => 'checkbox', '#id' => 'select_'.$node->nid);

      $textfield = array(
        '#type' => 'textarea',
        '#value' =>  $node->qrr_comments, 
        '#id' => 'show_coment_'.$node->nid,
        '#attributes' => array (
          'class' => array('reviewer_textarea'),
        ),
      );

      $ratings_form['table'][$fieldset['#id']] = &$fieldset;
      $ratings_form['table'][$checkbox['#id']] = &$checkbox;
      $ratings_form['table'][$textfield['#id']] = &$textfield;

      $author = entity_load_single('user', array($node->uid));
      $reviewer = entity_load_single('user', array($node->workbench_moderation['current']->uid));

      $ratings_form['table']['#rows'][] = array(
         'select' => array('data' => &$checkbox),
         'title' => l($node->title, 'node/'.$node->nid),
         'nid' => $node->nid,
         'type' => check_plain(node_type_get_name($node)),
         'author' => theme('username', array('account' => $author)),
         'revised_by' => theme('username', array('account' => $reviewer)),
         'state' => _ef_qrr_moderation_state_label($node->workbench_moderation['current']->state),
         'changed' => format_date($node->changed, 'short'),
         'rating' => array('data' => &$fieldset),
         'reviewer_comments' => array('data' => &$textfield),
      );

      $ratings_form['table']['#weight']=$form_weight++;

      unset($fieldset);
      unset($checkbox);
      unset($textfield);
   }

   $ratings_form['download'] = array(
      '#id' => 'download',
      '#type' => 'submit',
      '#value' => t('Download report'),
      '#weight' => $form_weight++
   );

   //link to pop up form
   $ratings_form['bulk'] = array(
      '#id' => 'bulk_rating',
      '#type' => 'submit',
      '#value' => t('Bulk rating'),
      '#weight' => $form_weight++
   );

   $ratings_form['update'] = array(
      '#id' => 'update',
      '#type' => 'submit',
      '#value' => t('Update ratings'),
      '#weight' => $form_weight++
   );
   
   $ratings_form['allnodes'] = array(
      '#id' => 'allnodes',
      '#type' => 'hidden',
      '#default_value' => 0,
   );

   return $ratings_form;
}

function ef_qrr_quality_rating_validate($form, &$form_state) {
   return _ef_qrr_filter_form_validate($form, $form_state);
}

function ef_qrr_quality_rating_submit($form, &$form_state) {
  set_time_limit(3000);
  ini_set('memory_limit','3000M');

  global $user;

  $v = $form_state['values'];
  $action = $form_state['clicked_button']['#id'];

  switch($action) {
    case 'update':
      foreach ( $v['table'] as $rating ) {
        if ( isset($rating['nid'] ) ) {
          $nid = $rating['nid'];
          $ratings = array();
          $revision = _ef_qrr_last_revision($nid, $user->uid);
          $rated = false;
          foreach ( $rating as $id => $value ) {
            if ( preg_match('/qrr_rating_/', $id )) {
              $riid = str_replace('qrr_rating_'.$nid.'_', '', $id);
              $ratings[$riid] = ($value == '-' ? NULL : $value) ;
              $rated |= ($value != '-' && $value != 0 );
            }
          }
          if ( $rated )
          _ef_qrr_save_ratings( $nid, $user->uid, $ratings, $rating["qrr_comments"]);
        }
      }

      break;

    case 'apply':
      $filters = array();

      if ( $v['states'] != 'any' )
        $filters['states'] = $v['states'];

      if ( !empty($v['title']) )
        $filters['title'] = $v['title'];

      if ( $v['content_type'] != 'any' )
        $filters['content_type'] = $v['content_type'];

      if ( count($v['countries'] > 0 ) )
        $filters['countries'] = array_keys($v['countries']);


      if ( $v['quality_of_contents'] != 'any'  ) {
        $_SESSION['qrr_filters']['quality_of_contents']=$v['quality_of_contents'];
        $filters['quality_of_contents'] = $v['quality_of_contents'];
      }
      if ( $v['balance_in_reporting'] != 'any'  ) { 
        $_SESSION['qrr_filters']['field_stars_array']=$v['balance_in_reporting'];
        $filters['balance_in_reporting'] = $v['balance_in_reporting'];
      }
      if ( $v['style_and_presentation'] != 'any'  ) { 
        $_SESSION['qrr_filters']['field_stars_array']=$v['style_and_presentation'];
        $filters['style_and_presentation'] = $v['style_and_presentation'];
      }
      if ( $v['excellent_command_of_english'] != 'any'  ) { 
        $_SESSION['qrr_filters']['field_stars_array']=$v['excellent_command_of_english'];
        $filters['excellent_command_of_english'] = $v['excellent_command_of_english'];
      }
      if ( $v['producto_specific_criteria'] != 'any'  ) { 
        $_SESSION['qrr_filters']['field_stars_array']=$v['producto_specific_criteria'];
        $filters['producto_specific_criteria'] = $v['producto_specific_criteria'];
      }

      if ( count($v['countries'] > 0 ) ){
        $filters['countries'] = array_keys($v['countries']);
      }



      $filters['date_from'] = $v['date_from'];
      // line added by Markel BM 09/12/2015
      $v['date_to'] = $v['date_to'] . ' 23:59:00';
      $filters['date_to'] = $v['date_to'];

      $_SESSION['qrr_filters'] = $filters;

      break;

    case 'reset':
      $_SESSION['qrr_filters'] = array();

      break;

    case 'download':

      $nids = array();

      if ( $v['allnodes'] ) {
        $nids = array_keys(_ef_qrr_selected_nodes('rating', false));
      }
      else {
        foreach ( $v['table'] as $key => $value ) {
          if ( preg_match('/select_/', $key ) && $value == 1 ) {
            $nids[] = str_replace('select_', '', $key);
          }
        }
      }

      $csvhdr = array(
        'type',
        'title',
        'nid',
        'country_group',
        'country',
        'author',
        'raters',
        'initial_deadline',
        'first_submitted',
        'delivery_date',
        'revision_deadline',
        'last_submitted',
        'reviewer_comments',
      );

      $rating_items = db_query("SELECT riid,name FROM {qrr_rating_item} ORDER BY riid");

      foreach ($rating_items as $ri) {
        $csvhdr[] = $ri->riid.'_'.str_replace(' ', '_', strtolower($ri->name));
      }

      $csv = implode(',', $csvhdr)."\n";

      foreach ( $nids as $nid ) {
        $res = db_query(
          "SELECT n.type, n.title, n.nid, u.name AS author, ".
          "GROUP_CONCAT(DISTINCT ur.name SEPARATOR ',') AS raters, ".
          "GROUP_CONCAT(TRIM(rv.comments) SEPARATOR '|') AS reviewer_comments ".
          "FROM {qrr_revision} rv ".
          "LEFT JOIN {node} n ON n.nid = rv.nid ".
          "LEFT JOIN {users} u ON n.uid = u.uid ".
          "LEFT JOIN {users} ur ON rv.uid = ur.uid ".
          "WHERE rv.nid = :nid ".
          "GROUP BY rv.nid", array(':nid' => $nid)
        );

        $rating_data = $res->fetchAssoc();

        unset($res);

        $node = node_load($nid);

        $latest_vid = $node->workbench_moderation['current']->vid;

        unset($node);

        $node = node_load($nid, $latest_vid);

        //COUNTRY GROUP FIELD
        $country_group_object = group_load($node->field_ef_assign_to_country_group[LANGUAGE_NONE][0]['target_id']);
        $country_group = $country_group_object->title;

        unset($country_group_object);

        //COUNTRY FIELD
        $country = '';
        if (isset($node->field_ef_country)) {
          $country = get_country_name_by_iso2($node->field_ef_country[LANGUAGE_NONE][0]['iso2']);
        }
        if (isset ($node->field_ef_quarter_report_country)) {
          $country = get_country_name_by_iso2($node->field_ef_quarter_report_country[LANGUAGE_NONE][0]['iso2']);
        }
        if (isset ($node->field_ef_eu_related_countries)) {
          $country_array = array();
          foreach ($node->field_ef_eu_related_countries[LANGUAGE_NONE] as $car_country_item) {
            $country_array[] = get_country_name_by_iso2($car_country_item['iso2']);
          }
          $country = implode(',', $country_array);
          $country = '"' . $country . '"';
        }

        if ( isset ($node->field_ef_report_delivery_date[LANGUAGE_NONE]) ) {
          $delivery_date = $node->field_ef_report_delivery_date[LANGUAGE_NONE][0]['value'];
        }
        else {
          $delivery_date = '';
        }

        if ( isset ($node->field_ef_revision_deadline) ) {
          $revision_deadline = $node->field_ef_revision_deadline;
        }
        else {
          $revision_deadline = '';
        }

        if ( module_exists('workbench_moderation')) {
          $res = db_query("SELECT nid, from_state, state,  uid, stamp ".
            "FROM {workbench_moderation_node_history} ".
            "WHERE nid=:nid ORDER BY stamp", array(':nid' => $nid));

          foreach ($res as $row) {
            $ts = $row->stamp;

            if ( $row->state == 'submitted_qr' ) {
              if ($ts > $last_submitted || empty($first_submitted)) {
                $last_submitted = $ts;
              }

              if ($ts < $first_submitted || empty($first_submitted)) {
                $first_submitted = $ts;
              }
            }

            if ( $row->state == 'published' ) {
              if ($ts > $last_published || empty($first_published)) {
                $last_published = $ts;
              }

              if ($ts < $first_published || empty($first_published)) {
                $first_published = $ts;
              }
            }
          }
        }

        unset($res);
        unset($row);

        $reviewer_comments = join(';',explode('|', $rating_data['reviewer_comments']));

        //Convert $node->type (machine name) to human readable name.
        $types = node_type_get_names();
        $ct_human_name = $types[$node->type];

        $csvline = array(
          $ct_human_name,
          '"' . $node->title . '"',
          $node->nid,
          $country_group,
          $country,
          '"' . $rating_data['author'] . '"',
          '"' . $rating_data['raters'] . '"',
          '"' . format_date($initial_deadline, 'short') . '"',
          '"' . format_date($first_submitted, 'short') . '"',
          '"' . format_date($delivery_date, 'short') . '"',
          '"' . format_date($revision_deadline, 'short') . '"',
          '"' . format_date($last_submitted, 'short') . '"',
          '"' . $reviewer_comments . '"',
        );

        unset($node);

        $res = db_query(
          "SELECT r.riid, AVG(r.rating) as avg_rating ".
          "FROM {qrr_rating} r ".
          "LEFT JOIN {qrr_revision} rv ON rv.rid = r.rid ".
          "WHERE rv.nid = :nid AND r.rating != 0 ".
          "GROUP BY rv.nid, r.riid ORDER BY riid", array(':nid' => $nid)
        );

        foreach ( $res as $row ) {
          $csvline[] = $row->avg_rating / 20;
        }
        $memory_used = memory_get_usage();
        dd('malloc: ' . $memory_used);
        $csv .= implode(',', $csvline)."\n";
      }

      $file = file_unmanaged_save_data($csv, "public://ratings_report.csv", FILE_EXISTS_REPLACE);
      $headers = array(
        'Content-Type' => 'text/csv',
        'Content-Disposition' => 'attachment; filename=ratings_report.csv',
      );

      file_transfer("public://ratings_report.csv", $headers );

      break;

    case 'bulk_rating':
      foreach ( $v['table'] as $key => $value )
        if ( preg_match('/select_/', $key ) && $value == 1 )
          $nids[] = str_replace('select_', '', $key);
        $_SESSION['qrr_nids'] = $nids;
      $form_state['redirect'] = array ( 'admin/content/ef-qrr/bulk-rating' );

      break;
  }
}

function ef_qrr_bulk_ratings( $form, &$form_state ) {

   $res = db_query("SELECT * FROM {qrr_rating_item} ORDER BY weight");

   foreach ( $res as $row ) {

      $id = 'qrr_rating_'.$row->riid;

      $qrr_form[$id] = array(
         '#id' => $id,
         '#type' => 'fivestar',
         '#allow_clear' => false,
         '#title' => $row->name,
         '#description' =>  $row->description,
         '#default_value' => NULL,
      );
   }

   $form['ratings_fs'] = array(
      '#type' => 'fieldset',
      '#title' => t('Bulk ratings'),
      'ratings' => $qrr_form,
      '#description' => t('These ratings will be applied to all selected contents'),
   );

   $form['cancel'] = array(
      '#type' => 'submit',
      '#name' => 'cancel',
      '#value' => t('Cancel'),
   );

   $form['submit'] = array(
      '#type' => 'submit',
      '#name' => 'submit',
      '#value' => t('Submit ratings'),
   );

   return $form;
}

function ef_qrr_bulk_ratings_submit( $form, &$form_state ) {
   global $user;
   $v = $form_state['values'];

   if ( $form_state['clicked_button']['#name'] == 'submit' ) {
      foreach ( $_SESSION['qrr_nids'] as $nid ) {
         $title = db_query("SELECT title FROM {node} n WHERE n.nid = :nid", array(':nid' => $nid))->fetchField();

         $ratings = array();

         foreach ( $v as $key => $value )
            if ( strpos( $key, 'qrr_rating_' ) !== FALSE ) {
               $riid = str_replace ( 'qrr_rating_', '', $key );
               $ratings[$riid] = ($value == '-' ? NULL : $value);
            }
         drupal_set_message(t('Ratings updated for :title', array(':title' => $title)));

         _ef_qrr_save_ratings($nid, $user->uid, $ratings);
      }
   }
   $form_state['redirect'] = array( 'admin/content/ef-qrr' );
}

/*
 *
 * Comments and documents
 *
 */

function _ef_qrr_attached_documents($node) {
   $ef_docs = field_get_items('node', $node, 'field_ef_documents');
   //$ef_src_docs = field_get_items('node', $node, 'field_ef_source_documents');

   $attachments = array();

   foreach ( $ef_docs as $doc )  // Could be NULL
      $attachments[] = $doc;
   /* BM Markel Arauzo issue 3566
    No need to download source documents as every deliverable from Authors should on the documents field
   foreach ( $ef_src_docs as $doc )
      $attachments[] = $doc;
   */
   return $attachments;
}

function ef_qrr_comments_documents($form, &$form_state) {
   $form['filter'] = _ef_qrr_filter_form($form_state['build_info']['form_id']);
   $form['comments_documents'] = ef_qrr_comments_documents_table();
   $form['pager'] = array( '#theme' => 'pager');
   return $form;
}

function ef_qrr_comments_documents_table() {
   global $user;

   $ratings_form = array();

   $hdr_checkbox = array('#type' => 'checkbox', '#id' => 'select-all');

   $header = array(array('data' => $hdr_checkbox), t('Title'), t('NID'), t('Type'), t('Author'), t('Revised by'), t('State'), t('Comments'), t('Download'), t('Upload'));

   $nids = _ef_qrr_selected_nodes('admin');

   $ratings_form = array(
      'table' => array(
         '#theme' => 'table',
         '#tree' => true,
         '#header' => $header,
      )
   );

   foreach ($nids as $nid => $vid) {

      $node = node_load($nid, $vid);

      $attachments = _ef_qrr_attached_documents($node);

      $last_revision = _ef_qrr_last_revision($node->nid);

      $download_button = array(
         '#id' => 'download_'.$node->nid,
         '#name' => 'download_'.$node->nid,
         '#type' => 'submit',
         '#value' => t('View documents'),
         '#attributes' => array('data-nid' => $node->nid),
         '#disabled' => empty($attachments),
      );


      // Check permissions

      if ( $node->uid == $user->uid )
         $reqd_permission = 'edit own '.$node->type.' content';
      else
         $reqd_permission = 'edit any '.$node->type.' content';

      $upload_button = array(
         '#id' => 'upload_'.$node->nid,
         '#name' => 'upload_'.$node->nid,
         '#type' => 'submit',
         '#value' => t('Upload'),
         '#attributes' => array('data-nid' => $node->nid),
         '#disabled' => !isset($node->field_ef_documents) || !user_access($reqd_permission),
      );

      $checkbox = array(
         '#type' => 'checkbox',
         '#id' => 'select_'.$node->nid,
         '#attributes' => array('data-nid' => $node->nid),
         '#disabled' => empty($attachments),
      );

      $author = entity_load_single('user', array($node->uid));
      $reviewer = entity_load_single('user', array($node->workbench_moderation['current']->uid));

      $ratings_form['table']['#rows'][] = array(
         'select_'.$node->nid => array('data' => &$checkbox),
         'title' => l($node->title, 'node/'.$node->nid),
         'nid' => $node->nid,
         'type' => check_plain(node_type_get_name($node)),
         'author' => theme('username', array('account' => $author)),
         'revised_by' => theme('username', array('account' => $reviewer)),
         'state' => _ef_qrr_moderation_state_label($node->workbench_moderation['current']->state),
         'comment' => $node->log,
         'download' => array('data' => &$download_button),
         'upload' => array('data' => &$upload_button)
      );

      $ratings_form['table']['download_'.$node->nid] = &$download_button;
      $ratings_form['table']['upload_'.$node->nid] = &$upload_button;
      $ratings_form['table']['select_'.$node->nid] = &$checkbox;

      unset ( $download_button );
      unset ( $upload_button );
      unset ( $checkbox );
   }

   $ratings_form['download'] = array(
      '#id' => 'download_selected',
      '#type' => 'submit',
      '#value' => t('Download selected')
   );

   return $ratings_form;
}

function ef_qrr_comments_documents_submit($form, &$form_state) {

   global $user;

   $v = $form_state['values'];

   $action = $form_state['clicked_button']['#id'];

   if ( preg_match('/upload_[0-9]+/', $action ) ) {
      $action = 'upload';
      $nid = $form_state['clicked_button']['#attributes']['data-nid'];
   }

   if ( preg_match( '/download_[0-9]+/', $action ) ) {
      $action = 'download';
      $nid = $form_state['clicked_button']['#attributes']['data-nid'];
   }

   switch($action) {
      case 'upload':
         $form_state['redirect'] = array( 'admin/content/ef-qrr/upload/'.$nid );
         break;

      case 'download':
         $form_state['redirect'] = array ( 'admin/content/ef-qrr/view-attachments/'.$nid );
         break;

      case 'download_selected':
         $fids = array();

         foreach ( $v['table'] as $item => $value ) {

            if ( preg_match('/select_[0-9]+/', $item) && $value ) {
               $nid = str_replace('select_', '', $item);
               $node = node_load($nid);
               $attachments = _ef_qrr_attached_documents($node);

               foreach ($attachments as $att){
                  if($node->type == 'ef_comparative_analytical_report' || $node->type == 'ef_national_contribution' || $node->type == 'ef_ic_quarterly_report'
                     || $node->type == 'ef_network_quarterly_report'){
                     $gid = $node->field_ef_assign_to_country_group['und'][0]['target_id'];
                     $query = "SELECT a.title
                                 FROM groups a
                                 WHERE a.gid = :gid";
                     $result = db_query($query,array(':gid' => $gid))->fetchAll();
                     $fids[] = array($att['fid'] , $result[0]->title . "_");
                  }
                  else
                     $fids[] = array($att['fid'] , "");
               }
            }
         }
         _ef_qrr_download_attachments('qrr_documents.zip', $fids);
         break;

      case 'apply':
         $filters = array();

         if ( $v['states'] != 'any' )
            $filters['states'] = $v['states'];

         if ( !empty($v['title']) )
            $filters['title'] = $v['title'];

         if ( $v['content_type'] != 'any' )
            $filters['content_type'] = $v['content_type'];

         if ( count($v['countries'] > 0 ) )
            $filters['countries'] = array_keys($v['countries']);

         $filters['date_from'] = $v['date_from'];
         $filters['date_to'] = $v['date_to'];

         $_SESSION['qrr_filters'] = $filters;
         break;

      case 'reset':
         $_SESSION['qrr_filters'] = array();
         break;

   }
}

/*
 *
 * View attachments
 *
 */

function ef_qrr_view_attachments($form, &$form_state, $nid) {
   $form_state['nid'] = $nid;
   $node = node_load($nid);
   $attachments =  _ef_qrr_attached_documents($node);
   $rows = array();

   $hdr_checkbox = array('#type' => 'checkbox', '#id' => 'select-all');

   $form['current_attachments'] = array(
      '#theme' => 'table',
      '#header' => array(array('data' => $hdr_checkbox), t('Name'), t('Type'), t('Size'), t('Date')),
   );

   foreach ( $attachments as $att ) {

      $checkbox = array('#type' => 'checkbox', '#id' => 'select_'.$att['fid']);

      $form['current_attachments']['#rows'][] = array(
         array('data' => &$checkbox),
         array('data' => l($att['filename'], file_create_url($att['uri']))),
         $att['filemime'],
         $att['filesize'],
         format_date($att['timestamp'])
      );

      $form['current_attachments'][$checkbox['#id']] = &$checkbox;
      unset($checkbox);
   }

   $form['download'] = array(
      '#id' => 'download_selected',
      '#type' => 'submit',
      '#value' => t('Download selected'),
   );

   $form['back'] = array(
      '#markup' => '<div>'.l(t('Back to Comments and Documents'), 'admin/content/ef-qrr/comments').'</div>',
   );

   return $form;
}

function ef_qrr_view_attachments_submit($form, &$form_state) {

   if ( $form_state['clicked_button']['#id'] == 'download_selected' ) {
      foreach ( $form_state['values'] as $fname => $fvalue )
         if ( preg_match('/select_/', $fname ) && $fvalue == 1 ) {
            $string =  explode("_",$fname);
            $node = node_load($form_state['nid']);
            if($node->type == 'ef_comparative_analytical_report' || $node->type == 'ef_national_contribution' || $node->type == 'ef_ic_quarterly_report'
                     || $node->type == 'ef_network_quarterly_report'){

               $gid = $node->field_ef_assign_to_country_group['und'][0]['target_id'];
               $query = "SELECT a.title
                                 FROM groups a
                                 WHERE a.gid = :gid";
               $result = db_query($query,array(':gid' => $gid))->fetchAll();
               $fids[] = array($string[1] , $result[0]->title . "_");
            }
            else
               $fids[] = array($string[1] , "");
         }
      _ef_qrr_download_attachments('qrr_documents_'.$form_state['nid'].'.zip', $fids);
   }
}

/*
 *
 * Upload attachments
 *
 */

function ef_qrr_upload_attachment($form, &$form_state, $nid) {
   $form_state['nid'] = $nid;
   $form['attachment'] = array(
      '#type' => 'file',
      '#title' => t('Choose a file to upload'),
   );

   $form['submit'] = array(
      '#id' => 'upload',
      '#type' => 'submit',
      '#value' => t('Upload file'),
   );

   $form['back'] = array(
      '#markup' => '<div>'.l(t('Back to Comments and Documents'), 'admin/content/ef-qrr/comments').'</div>',
   );

   return $form;
}

function ef_qrr_upload_attachment_validate($form, &$form_state) {
   $file = file_save_upload('attachment', array('file_validate_extensions' => array('doc docx pdf odt txt xls xlsx ppt pptx')));
   $node = node_load($form_state['nid']);

   if ( $file ) {
      $filesdir = "public://{$node->type}/field_ef_documents";
      file_prepare_directory($filesdir, FILE_CREATE_DIRECTORY);
      if ( $file = file_move($file, $filesdir.'/'.$file->filename ))
         $form_state['storage']['file'] = $file;
      else
         form_set_error('file', t("Failed to write the uploaded file."));
   }
   else
      form_set_error('file', t("No file was uploaded."));

}

function ef_qrr_upload_attachment_submit($form, &$form_state) {
   $file = $form_state['storage']['file'];
   unset($form_state['storage']['file']);
   $file->status = FILE_STATUS_PERMANENT;
   file_save($file);

   $node = node_load($form_state['nid']);
   $node->field_ef_documents[LANGUAGE_NONE][] = array(
      'fid' => $file->fid,
      'display' => 1,
      'description' => ''
   );

   field_attach_update('node', $node);
   entity_get_controller('node')->resetCache(array($node->nid));

   $title = db_query("SELECT title FROM node WHERE nid = :nid", array(':nid' => $form_state['nid']))->fetchField();
   drupal_set_message(t('File <em>@filename</em> has been saved as attachment for content <em>@title</em>',
      array('@filename' => $file->filename, '@title' => $title)));
   $form_state['redirect'] = 'admin/content/ef-qrr/comments';
}

/*
 *
 * Download attachments
 *
 */

function _ef_qrr_download_attachments($filename, $fids) {

   $zip = new ZipArchive();
   $dir = sys_get_temp_dir().'/';
   $tempfile = drupal_tempnam($dir, 'qrr');

   if ( $zip->open($tempfile, ZipArchive::CREATE ) != true )
      form_set_error(NULL, "Error creating ZIP file.");
   else
   {

      foreach ($fids as $key => $fid) {

         $file = file_load($fid[0]);
         $zip->addFile(drupal_realpath($file->uri),  $fid[1] . $file->filename );

      }

      $zip->close();

      $file = file_unmanaged_save_data(file_get_contents($tempfile), 'temporary://'.$filename, FILE_EXISTS_REPLACE);

      $headers = array(
         'Content-Type' => 'application/zip',
         'Content-Disposition' => 'attachment; filename='.$filename,
      );

      file_transfer($file, $headers);
   }

}

/*
 *
 * Status and actions
 *
 */

function ef_qrr_status_actions($form, &$form_state) {
   $form['filter'] = _ef_qrr_filter_form($form_state['build_info']['form_id']);
   $form['status_actions'] = ef_qrr_status_actions_table($form_state);
   $form['pager'] = array( '#theme' => 'pager');

   return $form;
}

function ef_qrr_status_actions_table(&$form_state) {

   global $user;

   $ratings_form = array();

   $hdr_checkbox = array('#type' => 'checkbox', '#id' => 'select-all');

   $header = array(array('data' => $hdr_checkbox), t('Title'), t('NID'), t('Type'), t('Author'), t('Revised by'), t('State'), t('Approved for payment'), t('Set moderation state'), t('Moderate'), t('Revision Log message'), t('Revision Deadline'), t('Delivery deadline'));

   $nids = _ef_qrr_selected_nodes('admin');

   $ratings_form = array(
      'table' => array(
         '#theme' => 'table',
         '#tree' => true,
         '#header' => $header,
      )
   );

   $form_state['nids'] = array();

   foreach ($nids as $nid => $vid) {

      $node = node_load($nid, $vid);

      $checkbox = array(
         '#type' => 'checkbox',
         '#attributes' => array('data-nid' => $node->nid),
         '#id' => 'select_'.$node->nid,
      );

      $form_state['nids'][] = $node->nid;

      if ( module_exists('workbench_moderation') ) {

         $current_moderation_state = $node->workbench_moderation['current']->state;
         $allowed_moderation_states = workbench_moderation_states_next($current_moderation_state, $user, $node); // Added by BM 1908
         $allowed_moderation_states[$current_moderation_state] =
            _ef_qrr_moderation_state_label($current_moderation_state);

         $moderation_state = array(
            '#id' => 'moderation_state_'.$node->nid,
            '#type' => 'select',
            '#options' => $allowed_moderation_states,
            '#tree' => false,
            '#default_value' => !empty($current_moderation_state) ? array($current_moderation_state) : array('draft'),
         );

         $moderation_link = l( t('Moderate'), 'node/'.$node->nid.'/moderation');

         $revision_log_message = array(
            '#id' => 'revision_log_message_' . $node->nid,
            '#type' => 'textarea',
            '#cols' => 60,
            '#rows' => 5,
            '#default_value' =>  get_revision_log_message_by_default($user),
            '#attributes' => array(
               'class' => array('custom-textarea'),
            )
         );

         $revision_deadline_field = field_get_items('node', $node,'field_ef_revision_deadline');

         $disabled = ($node->workbench_moderation['current']->state != 'under_revision_request');

         $revision_deadline_field = field_get_items('node', $node,'field_ef_revision_deadline');

         $revision_deadline = array(
            '#type' => module_exists('date_popup') ? 'date_popup' : 'date',
            '#id' => 'revision_deadline'.$node->nid,
            '#date_format' => 'd/m/Y',
            '#title' => '',
            '#disabled' => $disabled,
         );

         if($revision_deadline['#disabled'] != TRUE){
            $revision_deadline['#default_value'] = $revision_deadline_field[0]['value'];
         }


      }
      else {
         $moderation_link = '';
         $moderation_state = array(
            '#markup' => 'n/a'
         );
      }
      // Added by BM
      if (_ef_qrr_ratings_present($node->nid) || ($node->type == 'ef_annual_progress_report' || $node->type == 'erm_support_instrument' || $node->type == 'ef_erm_regulation' || $node->type == 'ef_factsheet' || $node->type == 'ef_case_study')) {
         if($node->type == 'ef_erm_regulation'){
            $afp_field = field_get_items('node', $node,'field_approved_payment_erm_reg');
         } else{
             $afp_field = field_get_items('node', $node, 'field_ef_approved_for_payment');
         }

         $afp_parsed = date_parse($afp_field[0]['value']);
         $default_afp = empty($afp_field) ?
            array() :
            array('year' => $afp_parsed['year'], 'month' => $afp_parsed['month'], 'day' => $afp_parsed['day']);

         $approved = array(
            '#type' => module_exists('date_popup') ? 'date_popup' : 'date',
            '#id' => 'approved_'.$node->nid,
            '#date_format' => 'd/m/Y',
            '#default_value' => $default_afp,
            '#title' => '',
         );
      }
      else {
         if($node->type != 'ef_annual_progress_report' || $node->type != 'erm_support_instrument' || $node->type != 'ef_erm_regulation' || $node->type != 'ef_factsheet' || $node->type != 'ef_case_study'){
            $checkbox['#disabled'] = true;
            $approved = array('#markup' => t('Not rated'));
         }
      }

      $ratings_form['table']['revision_log_message_'.$node->nid] = &$revision_log_message;
      $ratings_form['table']['approved_'.$node->nid] = &$approved;
      $ratings_form['table']['revision_deadline_'.$node->nid] = &$revision_deadline;
      $ratings_form['table']['moderation_state_'.$node->nid] = &$moderation_state;


      $author = entity_load_single('user', array($node->uid));
      $reviewer = entity_load_single('user', array($node->workbench_moderation['current']->uid));

      if ( isset ($node->field_ef_report_delivery_date[LANGUAGE_NONE]) ) {
         $delivery_date = new DateTime( $node->field_ef_report_delivery_date[LANGUAGE_NONE][0]['value'] );
         $delivery_deadline = $delivery_date->format('d/m/Y');
      }
      else {
         $delivery_deadline = 'n/a';
      }

      $ratings_form['table']['#rows'][] = array(
         'select_'.$node->nid => array('data' => &$checkbox),
         'title' => l($node->title, 'node/'.$node->nid),
         'nid' => $node->nid,
         'type' => check_plain(node_type_get_name($node)),
         'author' => theme('username', array('account' => $author)),
         'revised_by' => theme('username', array('account' => $reviewer)),
         'state' => _ef_qrr_moderation_state_label($current_moderation_state),
         'approved' => array('data' => &$approved),
         'moderation_state' => array('data' => &$moderation_state),
         'moderation_link' => array('data' => $moderation_link),
         'revision_log_message' => array('data' => &$revision_log_message),
         'revision_deadline' => array('data' => &$revision_deadline),
         'delivery_deadline' => $delivery_deadline,
      );

      $ratings_form['table']['select_'.$node->nid] = &$checkbox;

      unset($checkbox);
      unset($moderation_state);
      unset($approved);
      unset($revision_log_message);
      unset($revision_deadline);
   }

   $ratings_form['bulk_afp'] = array(
      '#id' => 'bulk_afp',
      '#type' => 'submit',
      '#value' => t('Bulk approved for payment'),
   );

   $ratings_form['update'] = array(
      '#id' => 'update',
      '#type' => 'submit',
      '#value' => t('Update')
   );

   return $ratings_form;
}

function ef_qrr_status_actions_submit($form, &$form_state) {

   global $user;

   $v = $form_state['values'];

   $action = $form_state['clicked_button']['#id'];

   switch($action) {
      case 'bulk_afp':
         foreach ( $v['table'] as $key => $value )
            if ( preg_match('/select_/', $key ) && $value == 1 )
               $nids[] = str_replace('select_', '', $key);


         $_SESSION['qrr_nids'] = $nids;
         $form_state['redirect'] = array ( 'admin/content/ef-qrr/bulk-afp' );
         break;

      case 'update':
         foreach ($form_state['nids'] as $nid) {
            $query = 'SELECT a.vid
                      FROM workbench_moderation_node_history a
                      WHERE a.current = 1
                      AND a.nid = :nid';
            $result = db_query($query,array(':nid' => $nid))->fetchAll();

            $node = node_load($nid,$result[0]->vid);

            if($node->type == 'ef_erm_regulation'){
               $afp_field = field_get_items('node', $node, 'field_approved_payment_erm_reg');
            }else{
               $afp_field = field_get_items('node', $node, 'field_ef_approved_for_payment');
            }
            $afp_parsed = date_parse($afp_field[0]['value']);


            $current_afp = empty($afp_field) ?
               NULL :
               array('year' => $afp_parsed['year'], 'month' => $afp_parsed['month'], 'day' => $afp_parsed['day']);

            $new_afp = date_parse($v['table']['approved_'.$nid]);

            if ( module_exists('workbench_moderation') ) {

               if ( isset($node->workbench_moderation) )
                  $current_moderation_state = $node->workbench_moderation['current']->state;
               else
                  $current_moderation_state = '';

               $input_length = strlen($v['table']['revision_log_message_'.$nid]);
               $default_length = strlen(get_revision_log_message_by_default($user));

               if ($input_length != $default_length) {

                     $node->log = $v['table']['revision_log_message_'.$nid];

                     $new_moderation_state = $v['moderation_state_'.$nid];

                     if ( $current_moderation_state != $new_moderation_state ) {
                        $state = true;

                     }

                     if(!empty($v['table']['revision_deadline_'.$nid])) {
                        $node->field_ef_revision_deadline['und'][0]['value'] = $v['table']['revision_deadline_'. $nid] . " 00:00:00";
                        $node->field_ef_revision_deadline['und'][0]['timezone'] = 'Europe/Dublin';
                        $node->field_ef_revision_deadline['und'][0]['timezone_db'] = 'Europe/Dublin';
                        $node->field_ef_revision_deadline['und'][0]['date_type'] = 'datetime';
                     }

                     if ( !empty($v['table']['approved_'.$nid] ) ) {
                        if ( $current_afp['day'] != $new_afp['day'] ||
                             $current_afp['month'] != $new_afp['month'] ||
                             $current_afp['year'] != $new_afp['year'] )
                        {
                           if($node->type == 'ef_erm_regulation'){
                              $node->field_approved_payment_erm_reg[LANGUAGE_NONE][0]['value'] = sprintf("%04d-%02d-%02d 00:00:00", $new_afp['year'],$new_afp['month'],$new_afp['day']);
                           }else{
                              $node->field_ef_approved_for_payment[LANGUAGE_NONE][0]['value'] =
                              sprintf("%04d-%02d-%02d 00:00:00", $new_afp['year'],$new_afp['month'],$new_afp['day']);
                           }
                        }
                     }
                     $node->revision = 1;
                     if($state && $new_moderation_state != 'published') {
                        $node->workbench_moderation_state_new = $new_moderation_state;
                     }
                     node_save($node);
               } else {

                     $save = FALSE;
                     $new_moderation_state = $v['moderation_state_'.$nid];

                     if ( $current_moderation_state != $new_moderation_state ) {
                        workbench_moderation_moderate($node, $new_moderation_state);
                        $save = TRUE;
                     }
                     if(!empty($v['table']['revision_deadline_'.$nid])){
                        $node->field_ef_revision_deadline['und'][0]['value'] = $v['table']['revision_deadline_'. $nid] . " 00:00:00";
                        $node->field_ef_revision_deadline['und'][0]['timezone'] = 'Europe/Dublin';
                        $node->field_ef_revision_deadline['und'][0]['timezone_db'] = 'Europe/Dublin';
                        $node->field_ef_revision_deadline['und'][0]['date_type'] = 'datetime';
                        $save = TRUE;
                     }
                     if ( !empty($v['table']['approved_'.$nid] ) ) {
                        if ( $current_afp['day'] != $new_afp['day'] ||
                             $current_afp['month'] != $new_afp['month'] ||
                             $current_afp['year'] != $new_afp['year'] )
                        {
                           $save = TRUE;
                           if($node->type == 'ef_erm_regulation'){
                              $node->field_approved_payment_erm_reg[LANGUAGE_NONE][0]['value'] = sprintf("%04d-%02d-%02d 00:00:00", $new_afp['year'],$new_afp['month'],$new_afp['day']);
                           }else{
                              $node->field_ef_approved_for_payment[LANGUAGE_NONE][0]['value'] =
                              sprintf("%04d-%02d-%02d 00:00:00", $new_afp['year'],$new_afp['month'],$new_afp['day']);
                           }
                        }

                     }
                  if($save){
                     field_attach_update('node',$node);
                     entity_get_controller('node')->resetCache(array($nid));
                  }
               }
            }

         }
         break;

      case 'apply':
         $filters = array();

         if ( $v['states'] != 'any' )
            $filters['states'] = $v['states'];

         if ( !empty($v['title']) )
            $filters['title'] = $v['title'];

         if ( $v['content_type'] != 'any' )
            $filters['content_type'] = $v['content_type'];

         if ( count($v['countries'] > 0 ) )
            $filters['countries'] = array_keys($v['countries']);

         $filters['date_from'] = $v['date_from'];
         $filters['date_to'] = $v['date_to'];

         $_SESSION['qrr_filters'] = $filters;
         break;


      case 'reset':
         $_SESSION['qrr_filters'] = array();
         break;
   }
}

function ef_qrr_bulk_afp( $form, &$form_state ) {

   $form['afp'] = array(
      '#type' => module_exists('date_popup') ? 'date_popup' : 'date',
      '#date_format' => 'd/m/Y',
      '#title' => t('Approved for payment'),
      '#description' => t('This date will be set as approved for payment for all selected nodes'),
   );

   $form['cancel'] = array(
      '#type' => 'submit',
      '#name' => 'cancel',
      '#value' => t('Cancel'),
   );

   $form['submit'] = array(
      '#type' => 'submit',
      '#name' => 'submit',
      '#value' => t('Set approved for payment'),
   );
   return $form;
}

function ef_qrr_bulk_afp_submit( $form, &$form_state ) {

   if ( $form_state['clicked_button']['#name'] == 'submit' ) {
      $new_afp = date_parse($form_state['values']['afp']);

      //added by BM
      //approved for payment has diff machine name for ERM regulation ct
      foreach ( $_SESSION['qrr_nids'] as $nid ) {
         $query = 'SELECT a.vid
                      FROM workbench_moderation_node_history a
                      WHERE a.current = 1
                      AND a.nid = :nid';
         $result = db_query($query,array(':nid' => $nid))->fetchAll();
         $node = node_load($nid,$result[0]->vid);

         if($node->type == 'ef_erm_regulation'){
             $node->field_approved_payment_erm_reg[LANGUAGE_NONE][0]['value'] =
               sprintf("%04d-%02d-%02d 00:00:00", $new_afp['year'],$new_afp['month'],$new_afp['day']);
         } else{
            $node->field_ef_approved_for_payment[LANGUAGE_NONE][0]['value'] =
               sprintf("%04d-%02d-%02d 00:00:00", $new_afp['year'],$new_afp['month'],$new_afp['day']);
         }
         field_attach_update('node', $node);
         entity_get_controller('node')->resetCache(array($node->nid));
      }
   }
   $form_state['redirect'] = array( 'admin/content/ef-qrr/status' );
}

/*
 *
 * Filter form, common for all three tabs
 *
 */

function _ef_qrr_filter_form($form_id) {

   $node_types = node_type_get_types();

   $content_types = variable_get('qrr_content_types');

   $current_uri = "http://" . $_SERVER["HTTP_HOST"] . $_SERVER["REQUEST_URI"];

   //validation for selected tab
   if(strpos($current_uri,"admin/content/ef-qrr/comments")) {
      //added by BM
      //for comments and documents tab make unavailable the following CTs
      $content_types['admin']['ef_restructuring_in_smes'] = 0;
      $content_types['admin']['ef_erm_regulation'] = 0;
      $content_types['admin']['erm_support_instrument'] = 0;
   }

   if ( $form_id == 'ef_qrr_quality_rating' )
      $allowed_node_types = $content_types['rating'];
   else
      $allowed_node_types = $content_types['admin'];

   $node_type_options = array();

   foreach ( $allowed_node_types as $type => $allowed )
      if ( $allowed )
         $node_type_options[$type] = $node_types[$type]->name;

   //Added by BM
   natsort($node_type_options);

   $res = db_query("SELECT name, label FROM {workbench_moderation_states}");

   foreach ( $res as $row )
      $state_options[$row->name] = $row->label;


   $filter_form = array();

   $filter_form['container_title'] = array(
      '#type' => 'container'
   );

   $filter_form['container_title']['title'] = array(
      '#type' => 'textfield',
      '#title' => t('Title'),
      '#default_value' => $_SESSION['qrr_filters']['title'],
   );

   $filter_form['container_filters'] = array(
      '#type' => 'container'
   );

   $filter_form['container_filters']['states'] = array(
      '#type' => 'select',
      '#title' => t('State'),
      '#options' => $state_options,
      '#default_value' => $_SESSION['qrr_filters']['states'],
      '#multiple' => true,
      '#attributes' => array(
         'class' => array('chosen-widget'),
      ),
   );

   $filter_form['container_filters']['content_type'] = array(
      '#type' => 'select',
      '#title' => t('Content type'),
      '#options' => $node_type_options,
      '#default_value' => $_SESSION['qrr_filters']['content_type'],
      '#multiple' => true,
      '#attributes' => array(
         'class' => array('chosen-widget'),
      ),
   );

   if ( module_exists('countries') ) {
       $eu_countries = array('BE', 'BG', 'CZ', 'DK', 'DE', 'EE', 'IE', 'EL', 'ES', 'FR', 'HR', 'IT', 'CY', 'LV',
          'LT', 'LU', 'HU', 'MT', 'NL', 'AT', 'PL', 'PT', 'RO', 'SI', 'SK', 'FI', 'SE', 'GB', 'NO','GR');


      $filter_form['container_filters']['countries'] = array(
         '#type' => 'select',
         '#title' => t('Filter by country'),
         '#default_value' => $_SESSION['qrr_filters']['countries'],
         '#options' => countries_get_countries('name', array('countries' => $eu_countries)),
         '#size' => 5,
         '#multiple' => TRUE,
         '#attributes' => array(
            'class' => array('chosen-widget'),
         ),
      );
   }



   
   $stars_array = array(
     '0' => t('Choose some option'),
     '20' => t('1 Star'),
     '40' => t('2 Stars'),
     '60' => t('3 Stars'),
     '80' => t('4 Stars'),
     '100' => t('5 Stars')
   );

   $filter_form['container_filters']['quality_of_contents'] = array(
       '#type' => 'select',
       '#title' => t('Quality of contents'),
       '#options' => $stars_array,
       '#default_value' => $_SESSION['qrr_filters']['quality_of_contents'],
       //'#multiple' => true,
       '#attributes' => array(
          'class' => array('chosen-widget'),
       ),
   );
   $filter_form['container_filters']['balance_in_reporting'] = array(
     '#type' => 'select',
     '#title' => t('Balance in reporting'),
     '#options' => $stars_array,
     '#default_value' => $_SESSION['qrr_filters']['balance_in_reporting'],
     //'#multiple' => true,
     '#attributes' => array(
        'class' => array('chosen-widget'),
     ),
   );
   $filter_form['container_filters']['style_and_presentation'] = array(
     '#type' => 'select',
     '#title' => t('Style and presentation'),
     '#options' => $stars_array,
     '#default_value' => $_SESSION['qrr_filters']['style_and_presentation'],
     //'#multiple' => true,
     '#attributes' => array(
        'class' => array('chosen-widget'),
     ),
   );
   $filter_form['container_filters']['excellent_command_of_english'] = array(
     '#type' => 'select',
     '#title' => t('Excellent command of English'),
     '#options' => $stars_array,
     '#default_value' => $_SESSION['qrr_filters']['excellent_command_of_english'],
     //'#multiple' => true,
     '#attributes' => array(
        'class' => array('chosen-widget'),
     ),
   );
   $filter_form['container_filters']['producto_specific_criteria'] = array(
     '#type' => 'select',
     '#title' => t('Product specific criteria'),
     '#options' => $stars_array,
     '#default_value' => $_SESSION['qrr_filters']['producto_specific_criteria'],
     //'#multiple' => true,
     '#attributes' => array(
        'class' => array('chosen-widget'),
     ),
   );






   $filter_form['container_date'] = array(
      '#type' => 'container'
   );

   $filter_form['container_date']['date_from'] = array(
      '#title' => t('From date'),
      '#default_value' => $_SESSION['qrr_filters']['date_from'],
   );

   $filter_form['container_date']['date_to'] = array(
      '#title' => t('To date'),
      '#default_value' => $_SESSION['qrr_filters']['date_to'],
   );

   if (module_exists('date_popup')) {
      $filter_form['container_date']['date_from']['#type'] = 'date_popup';
      $filter_form['container_date']['date_to']['#type'] = 'date_popup';
      $filter_form['container_date']['date_from']['#date_format'] = 'd/m/Y';
      $filter_form['container_date']['date_to']['#date_format'] = 'd/m/Y';
   }
   else {
      $filter_form['container_date']['date_from']['#type'] = 'date';
      $filter_form['container_date']['date_to']['#type'] = 'date';
   }
   $filter_form['container_buttons'] = array(
      '#type' => 'container'
   );

   $filter_form['container_buttons']['apply'] = array(
      '#id' => 'apply',
      '#type' => 'submit',
      '#value' => t('Apply'),
   );

   $filter_form['container_buttons']['reset'] = array(
      '#id' => 'reset',
      '#type' => 'submit',
      '#value' => t('Reset'),
   );

   // Set defaults if applicable

   $filters = isset($_SESSION['qrr_filters']) ? $_SESSION['qrr_filters'] : array();

   foreach ( array('title', 'states', 'countries', 'content_type', 'date_from', 'date_to', 'quality_of_contents', 'balance_in_reporting', 'style_and_presentation', 'excellent_command_of_english', 'producto_specific_criteria') as $fname )
      if ( isset($filters[$fname] ) )
         $filter_form[$fname]['#default_value'] = $filters[$fname];

   return $filter_form;
}

function _ef_qrr_filter_form_validate($form, &$form_state) {
   if (  $form_state['clicked_button']['#id'] != 'reset' ) {
      $date_from = $form_state['values']['date_from'];
      $date_to = $form_state['values']['date_to'];

      if ( !empty($date_from) && !empty($date_to) && ( strtotime($date_from) > strtotime($date_to) ) )
         form_set_error('date_to', t('Final date is less than initial date'));
   }
}

function _ef_qrr_selected_nodes($mode, $pager = true) {

   $qrr_settings = variable_get('qrr_content_types');

   $content_types = $qrr_settings[$mode];

   $current_uri = "http://" . $_SERVER["HTTP_HOST"] . $_SERVER["REQUEST_URI"];

   //validation for selected tab
   if(strpos($current_uri,"admin/content/ef-qrr/comments")) {
      //added by BM
      //for comments and documents tab make unavailable the following CTs
      $content_types['ef_restructuring_in_smes'] = 0;
      $content_types['ef_erm_regulation'] = 0;
      $content_types['erm_support_instrument'] = 0;
   }

   foreach ($content_types as $type => $allowed)
      if ( $allowed )
         $allowed_types[] = $type;

   $query = db_select('node', 'n')
      ->fields('n',array('nid', 'created'))
      ->condition('type', $allowed_types); // Redundant, also applied in _ef_qrr_apply_filters, but it doesn't hurt

   $query->leftJoin('workbench_moderation_node_history', 'wmnh', 'wmnh.nid = n.nid AND current=1');


   //$query->leftJoin('qrr_revision', 'qrv', 'n.nid = qrv.nid');
   //$query->join('qrr_rating', 'qrr', 'qrv.rid = qrr.rid');

   $query->fields('wmnh',array('state','vid'));

   if ( isset($_SESSION['qrr_filters']) )
      _ef_qrr_apply_filters($query, $_SESSION['qrr_filters']);

   $query->orderBy('created', 'DESC');

   if ( $pager )
      $query = $query->extend('PagerDefault')->limit(30);

   $vid_results = $query
    ->execute()
    ->fetchAll(); 

   foreach ($vid_results as $key => $current) {
      //Apply star filter
      if (  ($_SESSION['qrr_filters']['quality_of_contents'])!=0 ||
            ($_SESSION['qrr_filters']['balance_in_reporting'])!=0 ||
            ($_SESSION['qrr_filters']['style_and_presentation'])!=0 ||
            ($_SESSION['qrr_filters']['excellent_command_of_english'])!=0 ||
            ($_SESSION['qrr_filters']['producto_specific_criteria'])!=0 ) {
        //Get number of star filters apply*/
        global $user;
        $n_filters=0;
        $query_node_star="";
        $ini_query_node_star="SELECT * FROM qrr_rating qrrr LEFT JOIN qrr_revision qrrv ON qrrr.rid = qrrv.rid WHERE qrrv.uid = $user->uid AND qrrv.nid = ".$current->nid." AND ";
        //Quality of contents - riid=1
          if (count($_SESSION['qrr_filters']['quality_of_contents']) AND $_SESSION['qrr_filters']['quality_of_contents']!=0) {
            $n_filters++;
            $query_node_star.=$ini_query_node_star;
            $query_node_star.='(qrrr.riid = 1 AND qrrr.rating = '.strval($_SESSION['qrr_filters']['quality_of_contents']).") UNION ";
          }
        //Balance in reporting - riid=2
          if (count($_SESSION['qrr_filters']['balance_in_reporting']) AND $_SESSION['qrr_filters']['balance_in_reporting']!=0) {
            $n_filters++;
            $query_node_star.=$ini_query_node_star;
            $query_node_star.='(qrrr.riid = 2 AND qrrr.rating = '.strval($_SESSION['qrr_filters']['balance_in_reporting']).") UNION ";
          }    
        //Style and presentation - riid=3
          if (count($_SESSION['qrr_filters']['style_and_presentation']) AND $_SESSION['qrr_filters']['style_and_presentation']!=0) {
            $n_filters++;
            $query_node_star.=$ini_query_node_star;
            $query_node_star.='(qrrr.riid = 3 AND qrrr.rating = '.strval($_SESSION['qrr_filters']['style_and_presentation']).") UNION ";
          }
        //Excellent command of English - riid=4
          if (count($_SESSION['qrr_filters']['excellent_command_of_english']) AND $_SESSION['qrr_filters']['excellent_command_of_english']!=0) {
            $n_filters++;
            $query_node_star.=$ini_query_node_star;
            $query_node_star.='(qrrr.riid = 4 AND qrrr.rating = '.strval($_SESSION['qrr_filters']['excellent_command_of_english']).") UNION ";
          }
        //Product specific criteria - riid=5
          if (count($_SESSION['qrr_filters']['producto_specific_criteria']) AND $_SESSION['qrr_filters']['producto_specific_criteria']!=0) {
            $n_filters++;
            $query_node_star.=$ini_query_node_star;
            $query_node_star.='(qrrr.riid = 5 AND qrrr.rating = '.strval($_SESSION['qrr_filters']['producto_specific_criteria']).") UNION ";
          }


        $query_node_star=substr($query_node_star, 0, -6);

        $result_node_star = db_query($query_node_star);
        $count_node_star=$result_node_star->rowCount();

        if ($count_node_star == $n_filters) {
          $nids[$current->nid] = $current->vid; 
        }

      }else{
        $nids[$current->nid] = $current->vid;
      }
   }

   return $nids;

}

function ef_qrr_after_filter(){

}

function _ef_qrr_apply_filters(&$query, $filters) {
   global $user;

   if ( isset($filters['title']) )
      $query->condition('n.title', '%'.$filters['title'].'%', 'LIKE');

   if ( count($filters['states']) )
      $query->condition('wmnh.state', $filters['states']);

   if ( count($filters['content_type']) )
      $query->condition('n.type', $filters['content_type']);


   if ( !module_exists('date_popup')) {
      $date_from = $filters['date_from']['year'].'-'.$filters['date_from']['month'].'-'.$filters['date_from']['day'];
      $date_to = $filters['date_to']['year'].'-'.$filters['date_to']['month'].'-'.$filters['date_to']['day'];
   }
   else {
      $date_from = $filters['date_from'];
      $date_to = $filters['date_to'];
   }

   // No timezone set

   $ts_from = (empty($date_from) ? new DateTime('01/01/1970') : new DateTime($date_from));
   $ts_to = new DateTime($date_to);

   $query->condition('n.changed', $ts_from->getTimestamp(), '>=');
   $query->condition('n.changed', $ts_to->getTimestamp(), '<=');

   if ( count($filters['countries'] ) ) {

      $country_list = array();

      foreach ( $filters['countries'] as $country ) {
         //Countries for ERM instruments
         $query_erm = "SELECT b.tid
                  FROM taxonomy_term_data b WHERE b.name =
                  (SELECT a.name
                  FROM countries_country a
                  WHERE a.iso2 = :country)
                  AND b.vid = 58";
         $result_erm = db_query($query_erm,array(':country' => $country))->fetchAll();

         if($result_erm[0]->tid)
         $erm_country_list[] = $result_erm[0]->tid;
         //Countries for factsheets
         $query_factsheets = "SELECT b.tid
                              FROM taxonomy_term_data b WHERE b.name =
                              (SELECT a.name
                              FROM countries_country a
                              WHERE a.iso2 = :country)
                              AND b.vid = 8";
         $result_fact = db_query($query_factsheets,array(':country' => $country))->fetchAll();
         if($result_fact[0]->tid)
            $fact_country_list[] = $result_fact[0]->tid;

         $country_list [] = "'$country'";
      }
      $in_list = "(".join(',', $country_list).")";
      $erm_in_list = "(".join(',', $erm_country_list).")";
      $fact_in_list = "(".join(',', $fact_country_list).")";

      $query->leftJoin('field_data_field_country', 'f_country', 'f_country.entity_id = n.nid');
      $query->leftJoin('taxonomy_term_data', 'term_data', 'term_data.tid = f_country.field_country_tid');
      $query->leftJoin('countries_country', 'c_country', 'c_country.name = term_data.name');
      $query->leftJoin('field_data_field_ef_country', 'ef_country', 'ef_country.entity_id = n.nid');
      $query->leftJoin('field_data_field_ef_eu_related_countries', 'ef_related_countries', 'ef_related_countries.entity_id = n.nid');
      $query->leftJoin('field_data_field_ef_nuts','field_ef_nuts','field_ef_nuts.entity_id = n.nid');
      $query->leftJoin('field_data_field_country_erm_si','field_country_erm_si','field_country_erm_si.entity_id = n.nid');
      $query->leftJoin('field_data_field_country_erm_reg','field_country_erm_reg','field_country_erm_reg.entity_id = n.nid');
      $query->leftJoin('field_data_field_ef_quarter_report_country', 'qr_country', 'qr_country.entity_id = n.nid');
      $query->fields('term_data', array('name'));
      $query->fields('ef_country', array('field_ef_country_iso2'));
      $query->fields('ef_related_countries', array('field_ef_eu_related_countries_iso2'));
      $query->fields('qr_country', array('field_ef_quarter_report_country_iso2'));
      $country_clause = "(ef_country.field_ef_country_iso2 IN $in_list OR ".
         "ef_related_countries.field_ef_eu_related_countries_iso2 IN $in_list OR ".
         "qr_country.field_ef_quarter_report_country_iso2 IN $in_list OR ".
         "field_ef_nuts.field_ef_nuts_tid IN $fact_in_list OR ".
         "field_country_erm_si.field_country_erm_si_tid IN $erm_in_list OR ".
         "field_country_erm_reg.field_country_erm_reg_tid IN $erm_in_list OR ".
         "c_country.iso2 IN $in_list)";
      $query->where($country_clause);
   }


}

function _ef_qrr_moderation_state_label($modstate) {
   $label = db_query("SELECT label FROM {workbench_moderation_states} WHERE name = :name",
      array(':name' => $modstate))->fetchField();
   return $label;
}

/*
 *
 * Config form
 *
 */

function ef_qrr_settings($form, &$form_state) {

   $settings = variable_get('qrr_content_types', array());

   $form['qrr_config'] = array(
      '#type' => 'fieldset',
      '#title' => t('Allowed contents for quality rating'),
      '#description' => t('Check all node types for which Quality Rating and Reporting must be enabled.'),
   );

   $form['qrr_config']['rating'] = array(
      '#type' => 'fieldset',
      '#title' => t('Rateable content types'),
      '#description' => t('Check all node types that can be rated.'),
      '#collapsible' => true,
   );

   $form['qrr_config']['administration'] = array(
      '#type' => 'fieldset',
      '#title' => t('Administrable content types'),
      '#description' => t('Check all node types that can be managed from <em>Status actions</em> and <em>Comments and documents</em>.'),
      '#collapsible' => true,
   );

   foreach (node_type_get_types() as $type => $data ) {
      $form['qrr_config']['rating']['rating_'.$type] = array(
         '#name' => 'rating_'.$type,
         '#type' => 'checkbox',
         '#title' => $data->name,
         '#description' => $data->description,
         '#default_value' => $settings['rating'][$type],
      );

      $form['qrr_config']['administration']['admin_'.$type] = array(
         '#name' => 'admin_'.$type,
         '#type' => 'checkbox',
         '#title' => $data->name,
         '#description' => $data->description,
         '#default_value' => $settings['admin'][$type],
      );
   }

   $form['save'] = array(
      '#type' => 'submit',
      '#name' => 'submit',
      '#value' => t('Save configuration'),
   );

   return $form;
}

function ef_qrr_settings_submit($form, &$form_state) {
   $settings = array();

   foreach (node_type_get_types() as $type => $data ) {
         $settings['rating'][$type] = $form_state['values']['rating_'.$type];
         $settings['admin'][$type] = $form_state['values']['admin_'.$type];
   }
   variable_set('qrr_content_types', $settings);
}

function ef_qrr_reset($form, &$form_state) {
   return confirm_form( $form, t("All quality ratings will be permanently deleted. Are you sure?"));
}

function ef_qrr_reset_submit($form, &$form_state) {
   db_query("TRUNCATE TABLE {qrr_revision}");
   db_query("TRUNCATE TABLE {qrr_rating}");
   $form_state['redirect'] = array ( 'admin/content/ef-qrr' );
   drupal_set_message(t("All quality ratings have been deleted."));
}