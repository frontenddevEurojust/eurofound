<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>
<!--
  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>
-->
  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>




	<script src="http://code.jquery.com/jquery-1.9.1.js"></script>
  <script src="http://code.jquery.com/ui/1.10.2/jquery-ui.js"></script>
	<script src="data:text/javascript;base64;YWxlcnQoIldvcmtzIik7"></script>
	<script>
	jQuery( document ).ready(function() {

		//PICK THE VALUES OF THE REQUEST
		var field_value_group_by = getUrlVars()["field_value_group_by"];
		var field_value_country = getUrlVars()["field_value_country"];
		var field_value_sector = getUrlVars()["field_value_sector"];
		var field_value_restructuring = getUrlVars()["field_value_restructuring"];
		var field_value_date_from = getUrlVars()["date_from"];
		var field_value_date_to = getUrlVars()["date_to"];
		//ASSIGN THE REQUEST VALUES TO THE COMBOS
		jQuery("#field_group_by_filter").val(field_value_group_by);
		jQuery("#field_value_country").val(field_value_country);
		jQuery("#field_value_sector").val(field_value_sector);
		jQuery("#field_value_restructuring").val(field_value_restructuring);
		jQuery("#date_from").val(field_value_date_from);
		jQuery("#date_to").val(field_value_date_to);


   if(jQuery("#field_group_by_filter").val() == 'country')
			{
				jQuery("#field_value_country").prop('disabled', true);
				jQuery("#field_value_sector").prop('disabled', false);
				jQuery("#field_value_restructuring").prop('disabled', false);
			}
			if(jQuery("#field_group_by_filter").val() == 'sector')
			{
				jQuery("#field_value_country").prop('disabled', false);
				jQuery("#field_value_sector").prop('disabled', true);
				jQuery("#field_value_restructuring").prop('disabled', false);
			}
			if(jQuery("#field_group_by_filter").val() == 'restructuring_type' )
			{
				jQuery("#field_value_country").prop('disabled', false);
				jQuery("#field_value_sector").prop('disabled', false);
				jQuery("#field_value_restructuring").prop('disabled', true);
			}


		//ENABLE AND DISABLE THE COMBOS
		jQuery("#field_group_by_filter").change(function() {
			if(jQuery("#field_group_by_filter").val() == 'country')
			{
				jQuery("#field_value_country").prop('disabled', true);
				jQuery("#field_value_sector").prop('disabled', false);
				jQuery("#field_value_restructuring").prop('disabled', false);
			}
			if(jQuery("#field_group_by_filter").val() == 'sector')
			{
				jQuery("#field_value_country").prop('disabled', false);
				jQuery("#field_value_sector").prop('disabled', true);
				jQuery("#field_value_restructuring").prop('disabled', false);
			}
			if(jQuery("#field_group_by_filter").val() == 'restructuring_type' )
			{
				jQuery("#field_value_country").prop('disabled', false);
				jQuery("#field_value_sector").prop('disabled', false);
				jQuery("#field_value_restructuring").prop('disabled', true);
			}

		});

	//FUNCTION FOR PICK UP THE REQUEST PARAMETERS
	function getUrlVars()
	{
    var vars = [], hash;
    var hashes = window.location.href.slice(window.location.href.indexOf('?') + 1).split('&');
    for(var i = 0; i < hashes.length; i++)
    {
        hash = hashes[i].split('=');
        vars.push(hash[0]);
        vars[hash[0]] = hash[1];
    }
    return vars;
	}


	jQuery(function(){
		jQuery( "#date_from" ).datepicker({
                changeMonth: true,
                changeYear: true,
                yearRange: "1900:2050",
                dateFormat: "dd-mm-yy",
                defaultDate: '01-01-2002'
            });
		jQuery( "#date_to" ).datepicker({
                changeMonth: true,
                changeYear: true,
                yearRange: "1900:2050",
                dateFormat: "dd-mm-yy"
            });
	});

	//FUNCTIONS FOR EXPORTING THE TABLES TO EXCEL
	/*	jQuery("#excel_job_loss").click(function(e) {
        window.open('data:application/vnd.ms-excel,' + encodeURIComponent(jQuery('.table-job-loss').html()));
				e.preventDefault();
    });

		jQuery("#excel_job_gain").click(function(e) {
        window.open('data:application/vnd.ms-excel,' + encodeURIComponent(jQuery('.table-job-gain').html()));
        e.preventDefault();
    });
	*/
});

</script>

</head>
<body>


	<?php
	//Add by maren
	global $user;
	//END

	//FUNCTION FOR CREATE THE FILTERS "COMBOS" // (TYPE OF FILTER AND THE QUERY)
	function getComboByQuery($query,$type)
	{
		$combo = "";
		$result = db_query($query);

		if ($result)
		{
			$combo = '<select name="field_value_'.$type.'" id="field_value_'.$type.'" class="form-control form-select form-elements-inline">';
			$combo .= '<option value="All">All</option>';
			while ($row = $result->fetchAssoc())
			{
				$combo .= "<option value='".$row['value']."'>".$row['name']."</option>";
			}
			$combo .='</select>';
		}
		return $combo;
	}

	//---------------------------------------------------------------------
	//DEFINE THE FORM WITH FILTERS PRELOADED

	print('<form action="" method="get" id="views-exposed-form" accept-charset="UTF-8"><div class="factsheets_statistics-filters">');

	//FIRST FILTER FOR WHICH SHOW THE INFORMATION
	print "<div class='group-by-wrapper'><label for='field_group_by_filter'  class='label-elements-inline group_by_filter'>Information displayed by</label>";
	$combo = '<select name="field_value_group_by" id="field_group_by_filter" class="form-control form-select form-elements-inline">';
	$combo .= '<option value="country">Country</option>';
	$combo .= '<option value="sector">Sector</option>';
	$combo .= '<option value="restructuring_type">Restructuring Type</option>';
	$combo .='</select></div>';

	print $combo;

	print "<p class='pseudo-title'>Select Filters</p>";
	//SQL FOR PRELOADED THE COUNTRY FILTER
	$sqlCountry = "select field_data_field_ef_nuts_code.entity_id as value, term_data.name as name from field_data_field_ef_nuts_code ";
	$sqlCountry .= "inner join taxonomy_term_data as term_data on term_data.tid = field_data_field_ef_nuts_code.entity_id ";
	$sqlCountry .= "inner join taxonomy_term_hierarchy as term_hierarchy on term_hierarchy.tid = field_data_field_ef_nuts_code.entity_id ";
	$sqlCountry .= "where term_hierarchy.parent = 0 and field_data_field_ef_nuts_code.entity_id NOT IN ('9511','9521') order by term_data.name ASC";

	//PRINT THE COUNTRY FILTER
	$comboCountry = getComboByQuery($sqlCountry,"country");
	print "<div class='form-elements-wrapper'><label for='field_value_country' class='label-elements-inline field_value_country'>Country:</label>";
	print $comboCountry;
	print "</div>";

	//SQL FOR PRELOADED THE SECTOR FILTER
	$sqlSectors = "select distinct ef_nace.field_ef_nace_tid as value,term_data.name ";
	$sqlSectors.= "from field_data_field_ef_nace as ef_nace ";
	$sqlSectors.= "inner join node as n on n.nid = ef_nace.entity_id ";
	$sqlSectors.= "inner join taxonomy_term_data as term_data on term_data.tid = ef_nace.field_ef_nace_tid ";
	$sqlSectors.= "inner join taxonomy_term_hierarchy as term_hierarchy on term_hierarchy.tid = ef_nace.field_ef_nace_tid ";
	$sqlSectors.= "where term_hierarchy.parent = 0 ";
	$sqlSectors.= "order by term_data.name ASC ";

	//PRINT THE SECTOR FILTER
	$comboSectors = getComboByQuery($sqlSectors,"sector");
	print "<div class='form-elements-wrapper'><label for='field_value_sector'  class='label-elements-inline field_value_sector'>Sectors:</label>";
	print $comboSectors;
	print "</div>";

	//SQL FOR PRELOADED THE RESTRUCTURING TYPE FILTER
	$sqlRestructuring_type = "select distinct field_ef_type_of_restructuring_tid as value,term_data.name from ";
	$sqlRestructuring_type .= "field_data_field_ef_type_of_restructuring restructuring ";
	$sqlRestructuring_type .= "inner join taxonomy_term_data as term_data on term_data.tid = restructuring.field_ef_type_of_restructuring_tid ";
	$sqlRestructuring_type .= "and field_ef_type_of_restructuring_tid NOT IN ('1106','21302','1107','1102') ";
	$sqlRestructuring_type .= "order by term_data.name ASC";

	//PRINT RESTRUCTURING TYPE FILTER
	$comboRestructuring_type = getComboByQuery($sqlRestructuring_type,"restructuring");
	$comboRestructuring_type =  str_replace ('Outsourcing','Outsourcing/Relocation',$comboRestructuring_type);
	print "<div class='form-elements-wrapper'><label for='field_value_restructuring' class='label-elements-inline field_value_restructuring'>Restructuring type:</label>";
	print $comboRestructuring_type;
	print "</div>";

	$today_date = date('d-m-Y');
	print "<div class='form-elements-wrapper date'>";
		print "<div class='date-from'><label class='label-date-from' for='date_from'>From: </label>";
		print "<input type='text' name='date_from' id='date_from' placeholder=01-01-2002></div>";
		print "<div class='date-to'><label class='label-date-to' for='date_to'>To: </label>";
		print "<input type='text' name='date_to' placeholder=".$today_date." id='date_to'></div>";
	print "</div>";

	print('<div class="button-wrapper"><button class="btn btn-default form-submit" id="edit-submit" name="edit-submit" value="'.t('Apply').'" type="submit">'.t('Apply').'</button></div>');

	//FORM END
	print "</div></form>";

	//------------MAREN-------------------------------------------
	$fsfilter['main'] = $_REQUEST['field_value_group_by'];
	$fsfilter['country'] = $_REQUEST['field_value_country'];
	$fsfilter['sector'] = $_REQUEST['field_value_sector'];
	$fsfilter['restructuring'] = $_REQUEST['field_value_restructuring'];
	$fsfilter['from'] = $_REQUEST['date_from'];
	$fsfilter['to'] = $_REQUEST['date_to'];
	$tables = ef_factsheet_statistics_magic_queries($fsfilter);
	//------------END MAREN---------------------------------------

	$header = array('Name','Cases of Job Loss','Total of Job Loss','Median Job Loss','Job Loss Percentage');

  foreach ($tables['job_loss'] as $row) {
    $datajobloss[] = array($row['grouping'],$row['job_loss_cases'],$row['total_job_loss'],$row['median'],$row['percentage']);
  }

  if (count($datajobloss) == 0) {
    $datajobloss = array(array('No results.'));
    $disabled = 'disabled';
    print "<div class='table-job-no-data'>";
  }
  else {
    print "<div class='table-job-loss'>";
    $disabled = '';
  }

	//CREATE THE TABLE

	$output = theme('table',
						array('header' => $header,
									'rows' => $datajobloss,
									'sticky' => FALSE,
									'attributes' => array('id' => array('table_job_loss'))
								));


	//PRINT THE TABLE
  print $output;
	print('<form action="" method="post" id="views-exposed-form" accept-charset="UTF-8">');
	print('<div class="button-wrapper"><button class="export-excell-button" id="edit-submit-csv-job-loss" name="edit-submit-csv-job-loss" value="'.t('csv-job-loss').'" type="submit" '. $disabled . '>'.t('Export CSV Job Loss').'</button></div>');
	print "</form>";
	print "</div>";

	//---------------------------------------------------------------------
	$header = "";
	$header = array('Name','Cases of Job Gain','Total of Job Gain','Median Job Gain','Job Gain Percentage');

  foreach ($tables['job_gain'] as $row) {
    $datajobgain[] = array($row['grouping'],$row['job_gain_cases'],$row['total_job_gain'],$row['median'],$row['percentage']);
  }

  if (count($datajobgain) == 0) {
    $datajobgain = array(array('No results.'));
    $disabled = 'disabled';
    print "<div class='table-job-no-data'>";
  }
  else {
    print "<div class='table-job-gain'>";
    $disabled = '';
  }

	//CREATE THE TABLE

  $output = theme('table',
           array('header' => $header,
                  'rows' => $datajobgain,
									'sticky' => FALSE));
	//PRINT THE TABLE
  print $output;
	print('<form action="" method="post" id="views-exposed-form" accept-charset="UTF-8">');
  print('<div class="button-wrapper"><button class="export-excell-button" id="edit-submit-csv-job-gain" name="edit-submit-csv-job-gain" value="'.t('csv-job-gain').'" type="submit" '. $disabled . '>'.t('Export CSV Job Gain').'</button></div>');
	print "</form>";
  print "</div>";

	//CHECK THE URL REQUEST, IF CSV WE EXPORT THE TABLE OF JOB LOSS
	if(!empty($_REQUEST['edit-submit-csv-job-loss']))
	{
		if ($_REQUEST['edit-submit-csv-job-loss'] == "csv-job-loss")
		{
			$type = 'job-loss';
			csvPhp($datajobloss,$type);
		}
	}
	//CHECK THE URL REQUEST, IF CSV WE EXPORT THE TABLE OF JOB GAIN
	if(!empty($_REQUEST['edit-submit-csv-job-gain']))
	{
		if ($_REQUEST['edit-submit-csv-job-gain'] == "csv-job-gain")
		{
			$type = 'job-gain';
			csvPhp($datajobgain,$type);
		}
	}

?>
  <?php if ($rows): ?>
    <div class="view-content">
      <?php //print $rows; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php //print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php //print $footer; ?>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>
<?php

function 	obtainCountries(){
	$sqlCountry = "select field_data_field_ef_nuts_code.entity_id as value, term_data.name as name from field_data_field_ef_nuts_code ";
	$sqlCountry .= "inner join taxonomy_term_data as term_data on term_data.tid = field_data_field_ef_nuts_code.entity_id ";
	$sqlCountry .= "inner join taxonomy_term_hierarchy as term_hierarchy on term_hierarchy.tid = field_data_field_ef_nuts_code.entity_id ";
	$sqlCountry .= "where term_hierarchy.parent = 0 and field_data_field_ef_nuts_code.entity_id NOT IN ('9511','9521') order by term_data.name ASC";

	$result = db_query($sqlCountry);
	if($result){
		foreach ($result as $row)
		{
			$countries[] = $row->name;
		}
	}
	return $countries;
}

function obtainSectors(){
	$sqlSectors = "select distinct ef_nace.field_ef_nace_tid as value,term_data.name ";
	$sqlSectors.= "from field_revision_field_ef_nace as ef_nace ";
	$sqlSectors.= "inner join node as n on n.nid = ef_nace.entity_id ";
	$sqlSectors.= "inner join taxonomy_sector_by_nace as term_data on term_data.level1 = ef_nace.field_ef_nace_tid ";
	$sqlSectors.= "group by name ";
	$sqlSectors.= "order by term_data.name ASC ";

	$result = db_query($sqlSectors);

	if($result){
		foreach ($result as $row)
		{
			$sectors[] = $row->name;
		}
	}
	return $sectors;
}

function obtainRestructuring_types(){
	$sqlRestructuring_type = "select distinct field_ef_type_of_restructuring_tid as value,term_data.name from ";
	$sqlRestructuring_type .= "field_data_field_ef_type_of_restructuring restructuring ";
	$sqlRestructuring_type .= "inner join taxonomy_term_data as term_data on term_data.tid = restructuring.field_ef_type_of_restructuring_tid ";
	$sqlRestructuring_type .= "order by term_data.name ASC";

	$result = db_query($sqlRestructuring_type);
	if($result){
		foreach ($result as $row)
		{
			$restructuring_types[] = $row->name;
		}
	}
	return $restructuring_types;

}

function csvPhp($data,$type){

		$csv = "";
		if($type == 'job-loss'){
			$csv = "Name,Cases of Job Loss,Toatl of Job Loss,Median of Job Loss,Job Loss Percentage"."\n";
		}
		if($type == 'job-gain'){
			$csv = "Name,Cases of Job Gain,Toatl of Job Gain,Median of Job Gain,Job Gain Percentage"."\n";
		}

		for($x=0;$x<count($data);$x++){
			$csv .= implode(',',$data[$x])."\n";
		}

		$file = file_unmanaged_save_data($csv, "public://ratings_report.csv", FILE_EXISTS_REPLACE);
		if($type == 'job-loss'){
		  $headers = array(
      'Content-Type' => 'text/csv',
      'Content-Disposition' => 'attachment; filename=report-job-loss.csv',
			);
		}
		if($type == 'job-gain'){
			$headers = array(
      'Content-Type' => 'text/csv',
      'Content-Disposition' => 'attachment; filename=report-job-gain.csv',
			);
		}
    file_transfer("public://ratings_report.csv", $headers );
    break;

}

?>
