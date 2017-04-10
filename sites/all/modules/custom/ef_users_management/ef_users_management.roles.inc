<?php

/**
 * Implements hook_form_alter().
 */
function ef_users_management_form_alter(&$form, &$form_state, $form_id) {
   global $user;
   $numRoles = count($user->roles);

   if($form_id == 'user_profile_form'){

      // OSU --> Author profile form
   	if(in_array('OSU', $user->roles)){

   		$form['field_ef_first_name']['#disabled'] = TRUE;
   		$form['field_ef_last_name']['#disabled'] = TRUE;
   		$form['field_ef_organisation']['#disabled'] = TRUE;
   		$form['field_ef_work_telephone_number']['#disabled'] = TRUE;

   		$form['mimemail']['#type'] = 'hidden';
   		$form['locale']['#type'] = 'hidden';
   		$form['picture']['#type'] = 'hidden';

   		$form['account']['name']['#disabled'] = TRUE;
   		$form['account']['mail']['#disabled'] = TRUE;
   		$form['account']['status']['#type'] = 'hidden';
   		//$form['account']['pass']['#type'] = 'hidden';

   	}

      // Goberning Board --> Goberning Board Member profile form
      if(in_array('Governing Board', $user->roles)){

        /*
         $form['field_ef_first_name']['#disabled'] = TRUE;
         $form['field_ef_last_name']['#disabled'] = TRUE;
         $form['field_ef_organisation']['#disabled'] = TRUE;
         $form['field_ef_work_telephone_number']['#disabled'] = TRUE;

         $form['mimemail']['#type'] = 'hidden';
         $form['locale']['#type'] = 'hidden';
        */
         $form['picture']['#type'] = 'hidden';
         /*
         $form['account']['name']['#disabled'] = TRUE;
         $form['account']['mail']['#disabled'] = TRUE;
         $form['account']['status']['#type'] = 'hidden';
         $form['account']['pass']['#type'] = 'hidden';
        */
      }


   }


}
