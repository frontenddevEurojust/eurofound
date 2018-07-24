<?php


function ef_assistant_settings_form_alter(&$form, &$form_state,$form_id){

	global $user;


	if(isset($form['submitted']['meeting_secretary']) && isset($form['submitted']['expert_fee']) &&
			isset($form['submitted']['validate']) && isset($form['submitted']['remarks_from_meeting_secretary'])){


		if(in_array('Assistant', $user->roles)){

			$form['submitted']['meeting_information']['#disabled'] = TRUE;
			$form['submitted']['ef_webform_personal_information']['#disabled'] = TRUE;
			$form['submitted']['ef_webform_outward_journey']['#disabled'] = TRUE;
			$form['submitted']['ef_webform_return_journey']['#disabled'] = TRUE;
			$form['submitted']['ef_webform_other_transportation_expenses']['#disabled'] = TRUE;
			$form['submitted']['ef_webform_car_travel']['#disabled'] = TRUE;
			$form['submitted']['ef_webform_hotel_expenses']['#disabled'] = TRUE;
			$form['submitted']['ef_webform_daily_allowance']['#disabled'] = TRUE;
			$form['submitted']['payment_of_reimbursement_to']['#disabled'] = TRUE;
			$form['submitted']['ef_webform_additional_information']['#disabled'] = TRUE;

		}

		$form['#attached']['css'][] = drupal_get_path('module', 'ef_assistant_settings') . '/ef_assistant_settings.css';

	}


}
