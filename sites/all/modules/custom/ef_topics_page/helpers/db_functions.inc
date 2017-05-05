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


function add_highlighted_tab($tid, $page){

    /*
    SELECT node.title AS node_title, node.nid AS nid, node.language AS node_language, node.type AS node_type, publication_date.published_at AS publication_date_published_at, 'node' AS field_data_field_ef_event_start_date_node_entity_type, 'node' AS field_data_field_ef_publication_date_node_entity_type
    FROM 
    {node} node
    LEFT JOIN {publication_date} publication_date ON node.nid = publication_date.nid
    ORDER BY publication_date_published_at DESC

    // Need to check what's the tid of the received string as the URL can be changed with URL_ALIAS and not follow the pattern: topic/name
    $url_alias_query = "SELECT DISTINCT a.source
                    FROM url_alias a
                    WHERE a.alias ='topics/" . $name . "'";

    $result = db_query($url_alias_query)->fetchAll();
    // Always follows the rule: 'taxonomy/term/id'
    $aux = explode("/",$result[0]->source);
    $tid = $aux[2];  

    $query->add_where_expression(0, "node.nid IN (SELECT b.field_ef_highlighted_target_id
                                                FROM taxonomy_term_data d
                                                INNER JOIN field_data_field_ef_highlighted b ON d.tid = b.entity_id
                                                WHERE b.entity_id = '" . $tid . "')"
                                                );      
                                                
    }
    }
    */

}

function add_all_tab($tid, $page, $limit = 8){

    $query = db_select('taxonomy_index', 'a');
    $query->innerJoin('node', 'b', 'a.nid = b.nid');
    $query->innerJoin('node_type', 'f', 'b.type = f.type');
    $query->leftJoin('field_data_field_ef_publication_date', 'd', 'b.nid = d.entity_id');
    $query->leftJoin('publication_date', 'e', 'b.nid = e.nid');
    $query->leftJoin('field_data_field_ef_event_start_date', 'g', 'b.nid = g.entity_id');
    $query->addField('b', 'nid', 'node_id');
    $query->addField('b', 'title', 'title');
    $query->addField('f', 'name', 'ct_name');
    $query->addField('d', 'field_ef_publication_date_value','publication_date');
    $query->addField('e', 'published_at','published_at');
    $query->addField('g', 'field_ef_event_start_date_value','event_start_date');
    $query->condition('a.tid', $tid, '=');
    $query->condition('b.type', array('ef_publication','ef_report','ef_news','ef_event'), 'IN');
    $query->condition('b.status', 1, '=');

    // Order by publication_date field
    $query->extend('TableSort')->orderBy('e.published_at', 'DESC');
    // Limit the result set to 8 and define an offset dependant on the $page provided
     if(isset($page))
    {
        $query->range(8 * $page, $limit);
    }
    else
    {
        $query->range(0, $limit);
    }

    $result = $query->execute();
   
    
    if($result->rowCount() > 0)
    {
        $output = _db_result_to_array($result);
        return $output;
    }
  
    return;
    

}

function add_publications_tab($tid, $page, $limit = 8){

    $query = db_select('taxonomy_index', 'a');
    $query->innerJoin('node', 'b', 'a.nid = b.nid');
    $query->innerJoin('node_type', 'f', 'b.type = f.type');
    $query->innerJoin('field_data_field_ef_publication_date', 'd', 'b.nid = d.entity_id');
    $query->addField('b', 'nid', 'node_id');
    $query->addField('b', 'title', 'title');
    $query->addField('f', 'name', 'ct_name');
    $query->addField('d', 'field_ef_publication_date_value','publication_date');
    $query->condition('a.tid', $tid, '=');
    $query->condition('b.type', 'ef_publication', '=');
    $query->condition('b.status', 1, '=');

    // Order by publication_date field
    $query->extend('TableSort')->orderBy('d.field_ef_publication_date_value', 'DESC');
    // Limit the result set to 8 and define an offset dependant on the $page provided
     if(isset($page))
    {
        $query->range(8 * $page, $limit);
    }
    else
    {
        $query->range(0, $limit);
    }
    

    $result = $query->execute();
   
    
    if($result->rowCount() > 0)
    {  
        $output = _db_result_to_array($result);
        return $output;
    }    

    return;
}

function add_articles_tab($tid, $page, $limit = 8){

    $query = db_select('taxonomy_index', 'a');
    $query->innerJoin('node', 'b', 'a.nid = b.nid');
    $query->innerJoin('node_type', 'f', 'b.`type` = f.`type`');
    $query->innerJoin('publication_date', 'd', 'b.nid = d.nid');
    $query->addField('b', 'nid', 'node_id');
    $query->addField('b', 'title', 'title');
    $query->addField('f', 'name', 'ct_name');
    $query->addField('d', 'published_at','published_at');
    $query->condition('a.tid', $tid, '=');
    $query->condition('b.`type`', 'ef_report', '=');
    $query->condition('b.status', 1, '=');

    // Order by published_at field
    $query->extend('TableSort')->orderBy('d.published_at', 'DESC');
    // Limit the result set to 8 and define an offset dependant on the $page provided
    if(isset($page))
    {
        $query->range(8 * $page, $limit);
    }
    else
    {
        $query->range(0, $limit);
    }
    

    $result = $query->execute();
    
    if($result->rowCount() > 0)
    {
        $output = _db_result_to_array($result);
        return $output;
    }
    
    return;
  

}

function add_news_tab($tid, $page, $limit = 8){

    $query = db_select('taxonomy_index', 'a');
    $query->innerJoin('node', 'b', 'a.nid = b.nid');
    $query->innerJoin('node_type', 'f', 'b.type = f.type');
    $query->innerJoin('publication_date', 'd', 'b.nid = d.nid');
    $query->addField('b', 'nid', 'node_id');
    $query->addField('b', 'title', 'title');
    $query->addField('f', 'name', 'ct_name');
    $query->addField('d', 'published_at','published_at');
    $query->condition('a.tid', $tid, '=');
    $query->condition('b.type', 'ef_news', '=');
    $query->condition('b.status', 1, '=');

    // Order by published_at field
    $query->extend('TableSort')->orderBy('d.published_at', 'DESC');
    // Limit the result set to 8 and define an offset dependant on the $page provided
     if(isset($page))
    {
        $query->range(8 * $page, $limit);
    }
    else
    {
        $query->range(0, $limit);
    }

    $result = $query->execute();


    if($result->rowCount() > 0)
    {
        $output = _db_result_to_array($result);
        return $output;
    }
    
    return;
 
}

function add_events_tab($tid, $page, $limit = 8){

    $query = db_select('taxonomy_index', 'a');
    $query->innerJoin('node', 'b', 'a.nid = b.nid');
    $query->innerJoin('node_type', 'f', 'b.`type` = f.`type`');
    $query->innerJoin('field_data_field_ef_event_start_date', 'd', 'b.nid = d.entity_id');
    $query->addField('b', 'nid', 'node_id');
    $query->addField('b', 'title', 'title');
    $query->addField('f', 'name', 'ct_name');
    $query->addField('d', 'field_ef_event_start_date_value','event_start_date');
    // DOES NOT WORK so tranformation is done via PHP
    //$query->addExpression('DATE_FORMAT(field_ef_event_start_date_value,"%d %M %Y")','event_start_date');
    $query->condition('a.tid', $tid, '=');
    $query->condition('b.`type`', 'ef_event', '=');
    $query->condition('b.status', 1, '=');

    // Order by event_start_date field
    $query->extend('TableSort')->orderBy('d.field_ef_event_start_date_value', 'DESC');
    // Limit the result set to 8 and define an offset dependant on the $page provided
     if(isset($page))
    {
        $query->range(8 * $page, $limit);
    }
    else
    {
        $query->range(0, $limit);
    }

    $result = $query->execute();


    if($result->rowCount() > 0)
    {
        $output = _db_result_to_array($result);
        return $output;
    }
    
    return;
}

function _db_result_to_array($result){

    $output = array();
    
    foreach ($result as $node) 
    {
        $node = _transformDateFieldsIntoEfFormat($node);
        $output[] = $node;
    }

    return $output;
}

function _transformDateFieldsIntoEfFormat($node){
    
    foreach ($node as $field_name => $field_value) 
    {
        
        if($field_name == 'event_start_date' || $field_name == 'publication_date' )
        {

            $time = strtotime($field_value);

            $date = date('d F Y',$time);

            $node->{$field_name} = $date;
        
        }
        elseif ($field_name == 'published_at') 
        {
            $date = date('d F Y', $field_value);

            $node->{$field_name} = $date;
        }
    
    }

    return $node;
   
}