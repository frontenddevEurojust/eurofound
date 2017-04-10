<?php

  /* --- HOOK FORM ALTER --- */
  function ef_erm_support_instrument_form_alter(&$form, &$form_state, $form_id){

    /* --- EDIT MODE --- */
    if($form_id == 'erm_support_instrument_node_form'){
      $form['field_ef_involved_actors_tax']['#type'] = 'hidden';
      $form['title_field']['#type'] = 'hidden';
    	$form['field_observatory_erm_si']['#type'] = 'hidden';
    	$form['field_theme_erm_si']['#type'] = 'hidden';
      $form['field_phase_erm_si']['#type'] = 'hidden';


      // --- AJAX callback: Assign to - Contracts

      //if node create/edit form and contains fields assign_to and contract
      if (isset($form['field_assign_to_erm_si']) && isset($form['field_contract_erm_si'])) {

          place_request_contract_group_si($form);
          apply_ajax_select_si($form, $form_state);

        }

      // --- end AJAX callback


    	// --- JS and CSS ATTACHED FILES
      	$form['#attached']['js'] = array(
        	drupal_get_path('module', 'ef_erm_support_instrument') . '/ef_erm_support_instrument.js',
        );
      	$form['#attached']['css'] = array(
        	drupal_get_path('module', 'ef_erm_support_instrument') . '/ef_erm_support_instrument.css',
        );
    }
    /* ERM Support Instruments */
    if($form['#id'] == 'views-exposed-form-erm-support-instruments-page'){

      //update_erm_support_instrument();
      //Alphabetical order for the following filters: Support of SMEs,Funding
       $types_array = $form['field_type_erm_si_tid_selective']['#options'];
       //natcasesort($types_array);

       foreach ($types_array as $key => $value) {
           $parent = taxonomy_get_parents($key);


           //20933 tid for management
           //20932 tid for anticipation
           if($parent[20933]->name == 'Management'){
            $types_array[$key] = 'Management' . ' - ' . $value;
           }else if($parent[20932]->name == 'Anticipation'){
            $types_array[$key] = 'Anticipation' . ' - ' . $value;
           }
       }



       $fundings_array = $form['field_funding_erm_si_tid']['#options'];
       natsort($fundings_array);

       $involved_actors_array = $form['field_ef_involvement_types_tid']['#options'];
       natsort($involved_actors_array);

       $phase_array = $form['field_phase_erm_si_value']['#options'];
       natsort($phase_array);


       foreach ($fundings_array as $key => $value){

          $array_tids = array('20940','20939','20944','20941','20945','20943','20942','20938');
          if(!in_array($key,$array_tids)){
            $fundings_no_dup[$key] = $value;
          }
       }
       //definitive assignments to the form
       $form['field_type_erm_si_tid_selective']['#options'] = $types_array;
       $form['field_ef_involvement_types_tid']['#options'] = $involved_actors_array;
       $form['field_funding_erm_si_tid']['#options'] = $fundings_no_dup;
       $form['field_phase_erm_si_value']['#options'] = $phase_array;

       //Strange behavior: phase filter does not work unless we have both(standard and selective)
       //obviously, one of them, selective, will be hidden
       $form['field_phase_erm_si_value_selective']['#type'] = 'hidden';
       //$form['field_phase_erm_si_value_selective']['#disabled'] = TRUE;
       $form['#info']['filter-field_phase_erm_si_value_selective']['label'] = '';


     }
  }

  function check_involved_actors_terms($name,$node) {
    $term = taxonomy_get_term_by_name($name,'involved_actors');
    $position = sizeof($node->field_ef_involved_actors_tax['und']);
    foreach ($term as $key => $value) {
      $tid = $value->tid;
    }
    $node->field_ef_involved_actors_tax['und'][$position]['tid'] = $tid;
  }

  function update_erm_support_instrument() {
    $sql = "SELECT *
          FROM node
          WHERE node.type = 'erm_support_instrument'";
    $result = db_query($sql)->fetchAll();
    foreach ($result as $key => $value) {
      $node = node_load($value->nid);
      node_object_prepare($node);
      $node = node_submit($node);
      node_save($node);
    }
  }

  /* --- HOOK PRE SAVE --- */
  function ef_erm_support_instrument_node_presave($node){

    if($node->type == 'erm_support_instrument'){

      // PHASE AUTO SAVE
      if(isset($node->field_type_erm_si['und'][0]['tid'])){
        $type_tid = $node->field_type_erm_si['und'][0]['tid'];
        $type = taxonomy_term_load($type_tid);

          $phase_array = taxonomy_get_parents($type_tid);
          foreach ($phase_array as $key => $value) {
            $phase = $value->name;
          }

          switch ($phase) {
            case 'Management':

              $node->field_phase_erm_si['und'][0]['value'] = 0;
              break;

            case 'Anticipation':
              $node->field_phase_erm_si['und'][0]['value'] = 1;
              break;

            default:
              $node->field_phase_erm_si['und'][0]['value'] = null;
              break;
          }
      }
      foreach ($node->field_ef_involved_actors_tax as $key => $value) {
        unset($node->field_ef_involved_actors_tax[$key]);
      }

      //------------ Involved Actors filter to be rebuilt ----------------------
      if(isset($node->field_national_govermment_erm_si['und'][0]['value'])) {
        check_involved_actors_terms('National government',$node);
      }
      if(isset($node->field_other_erm_si['und'][0]['value'])) {
        check_involved_actors_terms('Other',$node);
      }
      if(isset($node->field_public_employ_serv_erm_si['und'][0]['value'])) {
        check_involved_actors_terms('Public employment services',$node);
      }
      if(isset($node->field_reg_local_gov_erm_si['und'][0]['value'])) {
        check_involved_actors_terms('Regional/local government',$node);
      }
      if(isset($node->field_employers_org_erm_si['und'][0]['value'])) {
        check_involved_actors_terms("Employer's or employee's organisations",$node);
      }

      //------------ End Involved Actors filter to be rebuilt ----------------------
    }

    // SORT TITLE (from english name field)

    if($node->type == 'erm_support_instrument' && empty($node->title) ){

      $en_name = $node->field_english_name_erm_si['und'][0]['value'];
      $lenght = strlen($en_name);
      if($lenght > 60){
        $limit = 60;
        do{
          $title = $en_name;
          $title = substr($title, 0, $limit);
          $last_char = substr($title, -1);
          $limit++;
        }while($last_char != ' ' || $limit < 69);

        $title = rtrim($title, ' ');
        $node->title = $title;
      }else{
        $node->title = $en_name;
      }


    }


  }





    // --- AJAX functions

  function place_request_contract_group_si(&$form) {

    // add weight to the Request assignee field group > than Publishing options (=90+30) to appear below it
    // see field_group.module 1014 about the +30
    if (isset($form['#groups']['group_contract_erm_si'])) {
      $form['#groups']['group_contract_erm_si']->weight = 150;
    }

  }

  function apply_ajax_select_si(&$form, &$form_state) {

    unset($form['field_assign_to_erm_si']['und']['#options']['_none']);
    unset($form['field_contract_erm_si']['und']['#options']['_none']);

    if (!isset($form_state['assignee_options'])) {
      $form_state['assignee_options'] = $form['field_assign_to_erm_si']['und']['#options'];
    }
    $assignee_options = $form_state['assignee_options'];
    if (!isset($form_state['contract_options'])) {
      $form_state['contract_options'] = $form['field_contract_erm_si']['und']['#options'];
    }

    $contract_options = $form_state['contract_options'];

    $initial_assignee = isset($form['#node']->field_assign_to_erm_si) && isset($form['#node']->field_assign_to_erm_si['und'])
      && isset($assignee_options[$form['#node']->field_assign_to_erm_si['und'][0]['target_id']]) ?
      $form['#node']->field_assign_to_erm_si['und'][0]['target_id'] : key($assignee_options);

    $selected_assignee = isset($form_state['values']['field_assign_to_erm_si']['und']) && isset($form_state['values']['field_assign_to_erm_si']['und'][0]['target_id'])
      ? $form_state['values']['field_assign_to_erm_si']['und'][0]['target_id'] : $initial_assignee;

    $initial_contract = isset($form['#node']->field_contract_erm_si) && isset($form['#node']->field_contract_erm_si['und'])
      && isset($contract_options[$form['#node']->field_contract_erm_si['und'][0]['tid']]) ?
      $form['#node']->field_contract_erm_si['und'][0]['tid'] : key($contract_options);

    $selected_contract = isset($form_state['values']['field_contract_erm_si']['und']) && isset($form_state['values']['field_contract_erm_si']['und'][0]['tid'])
      ? $form_state['values']['field_contract_erm_si']['und'][0]['tid'] : $initial_contract;

    $form['field_assign_to_erm_si']['und']['#ajax'] = array(
      'callback' => 'ajax_callback_si',
      'wrapper' => 'dropdown-second-replace',
    );

    $form['field_assign_to_erm_si']['und']['#default_value'] = $selected_assignee;
    $form['field_contract_erm_si']['und']['#prefix'] = '<div id="dropdown-second-replace">';
    $form['field_contract_erm_si']['und']['#suffix'] = '</div>';
    $form['field_contract_erm_si']['und']['#options'] = ajax_get_options_si($form_state, $selected_assignee);
    $form['field_contract_erm_si']['und']['#default_value'] = $selected_contract;

  }


  function ajax_callback_si($form, $form_state) {
    return $form['field_contract_erm_si']['und'];
  }


  function ajax_get_options_si($form_state, $key = '') {
    $assignee_options = $form_state['assignee_options'];
    $options = array();

    foreach ($assignee_options as $assignee_id => $assignee_name) {
      if ($assignee_id !== '_none') {
        $assignee = user_load($assignee_id);
        if (isset($assignee) && isset($assignee->field_ef_contracts) && isset($assignee->field_ef_contracts['und'])) {
          $assignee_contracts = $assignee->field_ef_contracts['und'];
          foreach ($assignee_contracts as $assignee_contract) {
            $contract = taxonomy_term_load($assignee_contract['tid']);
            $contract_number = $contract->field_ef_contract_number['und'][0]['safe_value'];
            $options[$assignee_id][$assignee_contract['tid']] = $contract_number . ': ' . $contract->name;
          }
        }
      }
    }

    if (isset($options[$key])) {
      return $options[$key];
    } else {
      return array();
    }
  }
