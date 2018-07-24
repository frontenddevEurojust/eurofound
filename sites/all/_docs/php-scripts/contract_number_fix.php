<?php 
$index = 0;
$contract_file = 'sites/all/_docs/feeds/vocabularies/vocabulary_contracts.csv';
if (($handle = fopen($contract_file, "r")) !== FALSE) {
    while (($data = fgetcsv($handle, 1000, "\t")) !== FALSE) {
    		if( ($index)>0 ){
    			echo "Updating \n";
	    	   	echo $data[0] . "<br />\n";
	            echo $data[1] . "<br />\n";
	            $x= taxonomy_get_term_by_name($data[0]);
	            $terms  = array_values($x);
	            $term = $terms[0];
	            $term->field_ef_contract_number[LANGUAGE_NONE][0]['value'] = $data[1];
	            taxonomy_term_save($term);
	    	}
	    	$index++;
    }
    fclose($handle);
}
?>