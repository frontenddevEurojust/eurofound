
<?php

#drush php-script --script-path=sites\all\_docs\php-scripts url-aliases-fixes


echo "\n-----------------------\n";
echo 'Searching for content ...';
echo "\n-----------------------";
echo "\n";


$urlAliasMappings = array(
	array("about", "about-eurofound"),
	array("about/what-we-do", "about-eurofound/what-we-do"),
	array("about/what-we-do/background", "about-eurofound/what-we-do/background"),
	array("about/what-we-do/mission-and-tasks", "about-eurofound/what-we-do/mission-and-tasks"),
	array("about/what-we-do/current-research", "about-eurofound/what-we-do/current-research"),
	array("about/what-we-do/eurofound-services", "about-eurofound/what-we-do/eurofound-services"),
	array("about/who-we-are", "about-eurofound/who-we-are"),
	array("about/who-we-are/staff", "about-eurofound/who-we-are/staff"),
	array("about/who-we-are/governing-board", "about-eurofound/who-we-are/governing-board"),
	array("about/who-we-are/governing-board/gb-documents", "about-eurofound/who-we-are/governing-board/gb-documents"),
	array("about/who-we-are/stakeholders-and-partners", "about-eurofound/who-we-are/stakeholders-and-partners"),
	array("about/procurement", "about-eurofound/procurement"),
	array("about/procurement/information-on-procurement", "about-eurofound/procurement/information-on-procurement"),
	array("about/procurement/awarded-contracts", "about-eurofound/procurement/awarded-contracts"),
	array("about/vacancies", "about-eurofound/vacancies"),
	array("about/vacancies/applicants", "about-eurofound/vacancies/information-for-applicants"),
	array("about/vacancies/applicants/recruitment-process", "about-eurofound/vacancies/information-for-applicants/recruitment-process"),
	array("about/vacancies/applicants/grading-renumeration", "about-eurofound/vacancies/information-for-applicants/grading-and-renumeration"),
	array("about/vacancies/applicants/eu-language-self-assessment-grid", "about-eurofound/vacancies/information-for-applicants/european-language-self-assessment-grid"),
	array("about/vacancies/information-for-graduate-traineeships", "about-eurofound/vacancies/information-for-graduate-traineeships"),
	array("observatories/emcc", "observatories/emcc/index"),
	array("observatories/emcc", "observatories/european-monitoring-centre-on-change-emcc"),
	array("observatories/emcc/comparative-information", "observatories/european-monitoring-centre-on-change-emcc/comparative-information"),
	array("observatories/emcc/erm", "observatories/european-monitoring-centre-on-change-emcc/european-restructuring-monitor"),
	array("observatories/emcc/european-jobs-monitor", "observatories/european-monitoring-centre-on-change-emcc/european-jobs-monitor"),
	array("observatories/emcc/labour-market-research", "observatories/european-monitoring-centre-on-change-emcc/labour-market-research"),
	array("observatories/emcc/case-studies", "observatories/european-monitoring-centre-on-change-emcc/case-studies"),
	array("observatories/eurwork", "observatories/eurwork/index"),
	array("observatories/eurwork", "observatories/european-observatory-of-working-life-eurwork"),
	array("observatories/eurwork/comparative-information", "observatories/european-observatory-of-working-life-eurwork/comparative-information"),
	array("observatories/eurwork/case-studies", "observatories/european-observatory-of-working-life-eurwork/case-studies")
);

function listMappings($urlAliasMappings){
	foreach ($urlAliasMappings as $mapping) {
	    echo "Value: " . $mapping[1]. "\n";
	}	
}


function listNodesByAutogeneratedTitleAlias($urlAliasMappings) {
	
	foreach ($urlAliasMappings as $mapping) {
	    echo "\n\nPattern to Find: " . $mapping[1]. "\n";
		$result = db_query("SELECT * FROM {url_alias} WHERE alias LIKE '".$mapping[1]."' order by pid desc");
		$count = 0;
		foreach ($result as $row) {
			$count++;
			echo "\n";
	    	echo("  ". $count . " - pid=".$row->pid);	    	
	    	echo("  alias: ". $row->alias);
		}    
	}	
	echo "\n";

}


function fixNodesByAutogeneratedTitleAlias($urlAliasMappings) {
	
	foreach ($urlAliasMappings as $mapping) {
	    echo "\n\nPattern to Find: " . $mapping[1]. "\n";
		$result = db_query("SELECT * FROM {url_alias} WHERE alias LIKE '".$mapping[1]."' order by pid desc");
		$count = 0;
		foreach ($result as $row) {
			$count++;
			$pid = $row->pid;
			$alias  =  $row->alias;

			echo "\n";
	    	echo("  ". $count . " - pid=".$pid);	    	
	    	echo("  alias: ". $alias);			

	    	if($count == 1){ // update with desired url alias
	    		echo("|  Update with desired url alias | " . $mapping[0] );
				db_update('url_alias')->fields(array('alias' => $mapping[0]))->condition('pid', $pid, '=')->execute();
	    	}else{ // update append -old in the url
				echo("| append -old | ". $alias."-old");
				db_update('url_alias')->fields(array('alias' => $alias."-old"))->condition('pid', $pid, '=')->execute();
	    	}


		}    
	}	
	echo "\n";

}

fixNodesByAutogeneratedTitleAlias($urlAliasMappings);