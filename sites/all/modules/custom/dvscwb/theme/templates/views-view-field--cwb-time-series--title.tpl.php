<?php
/*********************************************************
* Eworx S.A. - 2013
* @Author kp@eworx.gr
*
* required to construct a sound Time Series url
**********************************************************/

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */

	//kprint_r($row);

	//EF style
	$output = strtolower($output);
	$output = ucfirst($output);
	$prepend = ""; $append = "";
	$variables = $_GET["variables"];
	
	$variableType = "&variable-type=";
	$variableUnit = "&variable-unit=";

	$countryId = $row->_field_data['nid']['entity']->field_country['und'][0]['tid'];
	$extraParameters = "";
	if(isSet($variables)){
		foreach ($variables as &$value) {
			$taxonomyVariable = taxonomy_term_load($value);
			if($taxonomyVariable){
				$extraParameters .= "&variables[]=" . $value;
				if($variableType == "&variable-type="){
					$variableUnit .= $taxonomyVariable->field_unit['und'][0]['tid'];
					$variableType .= $taxonomyVariable->field_type['und'][0]['tid'];
				}
			}			
		}
	}else{
		$variableType = "";
		$variableUnit = "";
	}
	$extraParameters = $variableType . $variableUnit . $extraParameters ;
	

  	global $base_url;

	$seriesID = str_replace(' ', '%2B', $row -> node_title); // replace required for the d. select to work		
	$prepend = "<a href=\"".$base_url."/observatories/eurwork/collective-wage-bargaining/time-series?country=$countryId&sector=All&scope-employee=All&series_id=$seriesID$extraParameters\">"; 
	$append = '</a>';

?>
<?php print $prepend . $output . $append; ?>
