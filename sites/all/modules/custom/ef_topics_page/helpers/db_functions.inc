<?php



function check_topic_exists_by_url($term){

	$url_alias_query = "SELECT DISTINCT a.source FROM url_alias a
                      WHERE a.alias ='topics/" . $term . "'";

  	$result = db_query($url_alias_query)->fetchAll();

  	if (count($result) > 0)
  	{
  		return $result;
  	}
  	else
  	{
  		return FALSE;
  	}

}


function return_url_alias_data($tid){
	
	$url_query = "SELECT DISTINCT a.alias FROM url_alias a
                    WHERE a.source ='taxonomy/term/" . $tid . "'";

    $result = db_query($url_query)->fetchAll();

    return $result;
}