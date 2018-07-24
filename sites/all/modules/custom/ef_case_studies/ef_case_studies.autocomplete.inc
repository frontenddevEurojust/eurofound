<?php

	function ef_case_studies_form_alter(&$form, &$form_state, $form_id){
		//WGS-347: This form alteration breaks the ef_contract logic
		//as we think it wasn't needed we have removed them
		/*
		if($form_id == 'ef_case_study_node_form'){

			$form_state['rebuild']=TRUE;
			//drupal_rebuild_form('ef_case_study_node_form', $form_state);
		}
		*/

		if($form_id == 'views_exposed_form'){


			if($form['#id'] == 'views-exposed-form-case-studies-emcc-page'){

				$form['title_field_value']['#type'] = 'textfield';
				$form['title_field_value']['#autocomplete_path'] = 'ef_case_study/autocomplete';
				$form['title_field_value']['#id'] = 'title-autocomplete';

			}else if($form['#id'] == 'views-exposed-form-ef-case-studies-emcc-greening'){

				$form['title_field_value']['#type'] = 'textfield';
				$form['title_field_value']['#autocomplete_path'] = 'ef_case_study/autocomplete_emcc_greening';
				$form['title_field_value']['#id'] = 'title-autocomplete-emcc-greening';

			}else if($form['#id'] == 'views-exposed-form-ef-case-studies-emcc-tackling'){

				$form['title_field_value']['#type'] = 'textfield';
				$form['title_field_value']['#autocomplete_path'] = 'ef_case_study/autocomplete_emcc_tackling';
				$form['title_field_value']['#id'] = 'title-autocomplete-emcc-tackling';

			}else if($form['#id'] == 'views-exposed-form-ef-case-studies-eurwork-attractive'){

				$form['title_field_value']['#type'] = 'textfield';
				$form['title_field_value']['#autocomplete_path'] = 'ef_case_study/autocomplete_eurwork_attractive';
				$form['title_field_value']['#id'] = 'title-autocomplete-eurwork-attractive';

			}else if($form['#id'] == 'views-exposed-form-ef-case-studies-eurwork-ageing'){

				$form['title_field_value']['#type'] = 'textfield';
				$form['title_field_value']['#autocomplete_path'] = 'ef_case_study/autocomplete_eurwork_ageing';
				$form['title_field_value']['#id'] = 'title-autocomplete-eurwork-ageing';

			}else if($form['#id'] == 'views-exposed-form-ef-case-studies-eurwork-workers'){

				$form['title_field_value']['#type'] = 'textfield';
				$form['title_field_value']['#autocomplete_path'] = 'ef_case_study/autocomplete_eurwork_workers';
				$form['title_field_value']['#id'] = 'title-autocomplete-eurwork-workers';

			}

		}


	}



	// hook_menu(): Donde llamamos a la función de callback
	function ef_case_studies_menu(){

		$items['ef_case_study/autocomplete'] = array(

				'title' => 'Autocomplete for titles',
				'page callback' => '_titles_autocomplete',
				'access arguments' => array('access content'),
				'type' => MENU_CALLBACK

			);

		$items['ef_case_study/autocomplete_emcc_greening'] = array(

				'title' => 'Autocomplete for titles',
				'page callback' => '_titles_autocomplete_emcc_greening',
				'access arguments' => array('access content'),
				'type' => MENU_CALLBACK

			);

		$items['ef_case_study/autocomplete_emcc_tackling'] = array(

				'title' => 'Autocomplete for titles',
				'page callback' => '_titles_autocomplete_emcc_tackling',
				'access arguments' => array('access content'),
				'type' => MENU_CALLBACK

			);

		$items['ef_case_study/autocomplete_eurwork_attractive'] = array(

				'title' => 'Autocomplete for titles',
				'page callback' => '_titles_autocomplete_eurwork_attractive',
				'access arguments' => array('access content'),
				'type' => MENU_CALLBACK

			);

		$items['ef_case_study/autocomplete_eurwork_ageing'] = array(

				'title' => 'Autocomplete for titles',
				'page callback' => '_titles_autocomplete_eurwork_ageing',
				'access arguments' => array('access content'),
				'type' => MENU_CALLBACK

			);

		$items['ef_case_study/autocomplete_eurwork_workers'] = array(

				'title' => 'Autocomplete for titles',
				'page callback' => '_titles_autocomplete_eurwork_workers',
				'access arguments' => array('access content'),
				'type' => MENU_CALLBACK

			);


		return $items;

	}

	// Definimos la función de callback, necesario pasarle la variable - $string -
	// Hacemos una consulta a la base de datos para poder completar el nombre de los usuarios
	// que tengan el rol de profesionales (para no mostrar los demás usuarios)
	function _titles_autocomplete($string){


		$titles = array();

		$sql = "SELECT node.title AS title FROM node
				WHERE node.status = '1'
				AND node.type IN ('case_study_publication')
				and node.title like :cadena
				limit 10";

		$result = db_query($sql, array(':cadena' => '%' . $string . '%'))->fetchAll();


		foreach ($result as $i => $row) {
			$title = check_plain($row->title);
			$title = html_entity_decode($title);

			$pos = strpos($title, '&#039;');
			if($pos === false){
				$titles[$title] = $title;
			}else{
				$title = str_replace("&#039;", "'", $title);
				$titles[$title] = $title;
			}
		}

		/*
		$settings = array (
		  'foo' => 'bar',
		  'name' => 'john',
		);
		*/
		//drupal_add_js( array("ef_case_studies" => $settings), 'setting');
    //drupal_add_js(drupal_get_path('module', 'ef_case_studies') .'/ef_case_studies.js', 'file');

		drupal_json_output($titles);

	}


	function _titles_autocomplete_emcc_greening($string){

		$titles = array();

		$sql = "SELECT node.title AS title
				FROM node
				LEFT JOIN field_data_field_ef_country field_data_field_ef_country ON node.nid = field_data_field_ef_country.entity_id AND (field_data_field_ef_country.entity_type = 'node' AND field_data_field_ef_country.deleted = '0')
				LEFT JOIN countries_country countries_country_field_data_field_ef_country ON field_data_field_ef_country.field_ef_country_iso2 = countries_country_field_data_field_ef_country.iso2
				LEFT JOIN field_data_field_ef_case_study_name field_data_field_ef_case_study_name ON node.nid = field_data_field_ef_case_study_name.entity_id AND (field_data_field_ef_case_study_name.entity_type = 'node' AND field_data_field_ef_case_study_name.deleted = '0')
				INNER JOIN taxonomy_term_data taxonomy_term_data_field_data_field_ef_case_study_name ON field_data_field_ef_case_study_name.field_ef_case_study_name_tid = taxonomy_term_data_field_data_field_ef_case_study_name.tid
				LEFT JOIN publication_date publication_date ON node.nid = publication_date.nid
				WHERE ((
					(node.status = '1')
					AND (node.type IN  ('ef_case_study'))
					AND (field_data_field_ef_case_study_name.field_ef_case_study_name_tid = '13774')
				))
				and node.title like :cadena limit 10";

		$result = db_query($sql, array(':cadena' => '%' . $string . '%'))->fetchAll();


		foreach ($result as $i => $row) {
			$title = check_plain($row->title);
			$title = html_entity_decode($title);
			$titles[$title] = $title;
		}


		drupal_json_output($titles);

	}


	function _titles_autocomplete_emcc_tackling($string){

		$titles = array();

		$sql = "SELECT node.title AS title
				FROM node
				LEFT JOIN field_data_field_ef_country field_data_field_ef_country ON node.nid = field_data_field_ef_country.entity_id AND (field_data_field_ef_country.entity_type = 'node' AND field_data_field_ef_country.deleted = '0')
				LEFT JOIN countries_country countries_country_field_data_field_ef_country ON field_data_field_ef_country.field_ef_country_iso2 = countries_country_field_data_field_ef_country.iso2
				LEFT JOIN field_data_field_ef_case_study_name field_data_field_ef_case_study_name ON node.nid = field_data_field_ef_case_study_name.entity_id AND (field_data_field_ef_case_study_name.entity_type = 'node' AND field_data_field_ef_case_study_name.deleted = '0')
				INNER JOIN taxonomy_term_data taxonomy_term_data_field_data_field_ef_case_study_name ON field_data_field_ef_case_study_name.field_ef_case_study_name_tid = taxonomy_term_data_field_data_field_ef_case_study_name.tid
				LEFT JOIN publication_date ON node.nid = publication_date.nid
				WHERE ((
					(node.status = '1')
					AND (node.type IN  ('ef_case_study'))
					AND (field_data_field_ef_case_study_name.field_ef_case_study_name_tid = '13776')
				))
				and node.title like :cadena limit 10";

		$result = db_query($sql, array(':cadena' => '%' . $string . '%'))->fetchAll();


		foreach ($result as $i => $row) {
			$title = check_plain($row->title);
			$title = html_entity_decode($title);
			$titles[$title] = $title;
		}


		drupal_json_output($titles);

	}


	function _titles_autocomplete_eurwork_attractive($string){

		$titles = array();

		$sql = "SELECT node.title AS title
				FROM node
				LEFT JOIN field_data_field_ef_country ON node.nid = field_data_field_ef_country.entity_id AND (field_data_field_ef_country.entity_type = 'node' AND field_data_field_ef_country.deleted = '0')
				LEFT JOIN countries_country countries_country_field_data_field_ef_country ON field_data_field_ef_country.field_ef_country_iso2 = countries_country_field_data_field_ef_country.iso2
				LEFT JOIN field_data_field_ef_case_study_name field_data_field_ef_case_study_name ON node.nid = field_data_field_ef_case_study_name.entity_id AND (field_data_field_ef_case_study_name.entity_type = 'node' AND field_data_field_ef_case_study_name.deleted = '0')
				INNER JOIN taxonomy_term_data taxonomy_term_data_field_data_field_ef_case_study_name ON field_data_field_ef_case_study_name.field_ef_case_study_name_tid = taxonomy_term_data_field_data_field_ef_case_study_name.tid
				LEFT JOIN publication_date publication_date ON node.nid = publication_date.nid
				WHERE ((
					(node.status = '1')
					AND (node.type IN  ('ef_case_study'))
					AND (field_data_field_ef_case_study_name.field_ef_case_study_name_tid = '13777')
				))
				and node.title like :cadena limit 10";

		$result = db_query($sql, array(':cadena' => '%' . $string . '%'))->fetchAll();


		foreach ($result as $i => $row) {
			$title = check_plain($row->title);
			$title = html_entity_decode($title);
			$titles[$title] = $title;
		}


		drupal_json_output($titles);

	}


	function _titles_autocomplete_eurwork_ageing($string){

		$titles = array();

		$sql = "SELECT node.title AS title
				FROM node
				LEFT JOIN field_data_field_ef_country field_data_field_ef_country ON node.nid = field_data_field_ef_country.entity_id AND (field_data_field_ef_country.entity_type = 'node' AND field_data_field_ef_country.deleted = '0')
				LEFT JOIN countries_country countries_country_field_data_field_ef_country ON field_data_field_ef_country.field_ef_country_iso2 = countries_country_field_data_field_ef_country.iso2
				LEFT JOIN field_data_field_ef_case_study_name field_data_field_ef_case_study_name ON node.nid = field_data_field_ef_case_study_name.entity_id AND (field_data_field_ef_case_study_name.entity_type = 'node' AND field_data_field_ef_case_study_name.deleted = '0')
				INNER JOIN taxonomy_term_data taxonomy_term_data_field_data_field_ef_case_study_name ON field_data_field_ef_case_study_name.field_ef_case_study_name_tid = taxonomy_term_data_field_data_field_ef_case_study_name.tid
				LEFT JOIN publication_date publication_date ON node.nid = publication_date.nid
				WHERE ((
					(node.status = '1')
					AND (node.type IN  ('ef_case_study'))
					AND (field_data_field_ef_case_study_name.field_ef_case_study_name_tid = '13778')
				))
				and node.title like :cadena limit 10";

		$result = db_query($sql, array(':cadena' => '%' . $string . '%'))->fetchAll();


		foreach ($result as $i => $row) {
			$title = check_plain($row->title);
			$title = html_entity_decode($title);
			$titles[$title] = $title;
		}


		drupal_json_output($titles);

	}


	function _titles_autocomplete_eurwork_workers($string){

		$titles = array();

		$sql = "SELECT node.title AS title
				FROM node
				LEFT JOIN field_data_field_ef_country field_data_field_ef_country ON node.nid = field_data_field_ef_country.entity_id AND (field_data_field_ef_country.entity_type = 'node' AND field_data_field_ef_country.deleted = '0')
				LEFT JOIN countries_country countries_country_field_data_field_ef_country ON field_data_field_ef_country.field_ef_country_iso2 = countries_country_field_data_field_ef_country.iso2
				LEFT JOIN field_data_field_ef_case_study_name field_data_field_ef_case_study_name ON node.nid = field_data_field_ef_case_study_name.entity_id AND (field_data_field_ef_case_study_name.entity_type = 'node' AND field_data_field_ef_case_study_name.deleted = '0')
				INNER JOIN taxonomy_term_data taxonomy_term_data_field_data_field_ef_case_study_name ON field_data_field_ef_case_study_name.field_ef_case_study_name_tid = taxonomy_term_data_field_data_field_ef_case_study_name.tid
				LEFT JOIN publication_date publication_date ON node.nid = publication_date.nid
				WHERE ((
					(node.status = '1')
					AND (node.type IN  ('ef_case_study'))
					AND (field_data_field_ef_case_study_name.field_ef_case_study_name_tid = '13775')
				))
				and node.title like :cadena limit 10";

		$result = db_query($sql, array(':cadena' => '%' . $string . '%'))->fetchAll();


		foreach ($result as $i => $row) {
			$title = check_plain($row->title);
			$title = html_entity_decode($title);
			$titles[$title] = $title;
		}


		drupal_json_output($titles);

	}
