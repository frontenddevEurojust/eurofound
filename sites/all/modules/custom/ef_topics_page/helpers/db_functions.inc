<?php



function check_topic_exists_by_url_and_language($term, $language){

    $url_alias_query = "SELECT a.source FROM url_alias a WHERE a.alias = :term";

    $result = db_query($url_alias_query, [':term' => 'topics/' . $term])->fetchAll();


    if (!count($result))
    {
        drupal_not_found();
    }

    // Always follows the rule: 'taxonomy/term/id'
    $aux = explode("/",$result[0]->source);
    $tid = $aux[2];
    // Retrieve full term for $variables populating
    $term = taxonomy_term_load($tid);


    $data['term'] = $term;


    if (isset($term->field_term_title[$language]))
    {
        $data['language'] = $language;
    }
    elseif (isset($term->field_term_title['en']))
    {
         $data['language'] = 'en';
    }
    else
    {
        drupal_not_found();
    }


    return $data;
}


function return_url_alias_data($tid){

	$url_query = "SELECT DISTINCT a.alias FROM url_alias a
                    WHERE a.source ='taxonomy/term/" . $tid . "'";

    $result = db_query($url_query)->fetchAll();

    return $result;
}


function add_highlights_tab($tid, $page, $limit = 8){

    $query = db_select('field_data_field_ef_highlighted', 'a');
    $query->distinct();
    $query->innerJoin('node', 'b', 'a.field_ef_highlighted_target_id = b.nid');
    $query->innerJoin('node_type', 'f', 'b.type = f.type');
    $query->leftJoin('publication_date', 'e', 'b.nid = e.nid');
    $query->leftJoin('field_data_field_ef_event_start_date', 'g', 'b.nid = g.entity_id');
    $query->addField('b', 'nid', 'node_id');
    $query->addField('b', 'title', 'title');
    $query->addField('f', 'name', 'ct_name');
    $query->addField('e', 'published_at','published_at');
    $query->addField('g', 'field_ef_event_start_date_value','event_start_date');
    $query->condition('a.entity_id', $tid, '=');
    $query->condition('a.bundle', 'ef_topics', '=');
    $query->condition('b.type', array('ef_publication','ef_report','ef_news','ef_event','blog','presentation'), 'IN');
    $query->condition('b.status', 1, '=');



    // Ordering is managed in topics edit mode
    
    // Limit the result set to 8 and define an offset dependant on the $page provided
     if (isset($page))
    {
        $query->range(8 * $page, $limit);
    }
    else
    {
        $query->range(0, $limit);
    }

    $result = $query->execute();


    if ($result->rowCount())
    {
        $output = _db_result_to_array($result);
        return $output;
    }

    return;


}

function add_all_tab($tid, $page, $limit = 8){

    $query = db_select('taxonomy_index', 'a');
    $query->distinct();
    $query->innerJoin('node', 'b', 'a.nid = b.nid');
    $query->innerJoin('node_type', 'f', 'b.type = f.type');
    $query->leftJoin('publication_date', 'e', 'b.nid = e.nid');
    $query->leftJoin('field_data_field_ef_event_start_date', 'g', 'b.nid = g.entity_id');
    $query->addField('b', 'nid', 'node_id');
    $query->addField('b', 'title', 'title');
    $query->addField('f', 'name', 'ct_name');
    $query->addField('e', 'published_at','published_at');
    $query->addField('g', 'field_ef_event_start_date_value','event_start_date');
    $query->condition('a.tid', $tid, '=');
    $query->condition('b.type', array('ef_publication','ef_report','ef_news','ef_event','blog','presentation'), 'IN');
    $query->condition('b.status', 1, '=');

    
    // Order by publication_date field
    $query->extend('TableSort')->orderBy('e.published_at', 'DESC');
    // Limit the result set to 8 and define an offset dependant on the $page provided
     if (isset($page))
    {
        $query->range(8 * $page, $limit);
    }
    else
    {
        $query->range(0, $limit);
    }

    $result = $query->execute();


    if ($result->rowCount())
    {
        $output = _db_result_to_array($result);
        return $output;
    }

    return;


}

function add_publications_tab($tid, $page, $limit = 8){

    $query = db_select('taxonomy_index', 'a');
    $query->distinct();
    $query->innerJoin('node', 'b', 'a.nid = b.nid');
    $query->innerJoin('node_type', 'f', 'b.type = f.type');
    $query->leftJoin('publication_date', 'e', 'b.nid = e.nid');
    $query->addField('b', 'nid', 'node_id');
    $query->addField('b', 'title', 'title');
    $query->addField('f', 'name', 'ct_name');
    $query->addField('e', 'published_at','published_at');
    $query->condition('a.tid', $tid, '=');
    $query->condition('b.type', array('ef_publication','blog','presentation'), 'IN');
    $query->condition('b.status', 1, '=');


    // Order by publication_date field
    $query->extend('TableSort')->orderBy('e.published_at', 'DESC');
    // Limit the result set to 8 and define an offset dependant on the $page provided
     if (isset($page))
    {
        $query->range(8 * $page, $limit);
    }
    else
    {
        $query->range(0, $limit);
    }


    $result = $query->execute();


    if ($result->rowCount())
    {
        $output = _db_result_to_array($result);
        return $output;
    }

    return;
}

function add_articles_tab($tid, $page, $limit = 8){

    $query = db_select('taxonomy_index', 'a');
    $query->distinct();
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
    if (isset($page))
    {
        $query->range(8 * $page, $limit);
    }
    else
    {
        $query->range(0, $limit);
    }


    $result = $query->execute();

    if ($result->rowCount())
    {
        $output = _db_result_to_array($result);
        return $output;
    }

    return;


}

function add_news_tab($tid, $page, $limit = 8){

    $query = db_select('taxonomy_index', 'a');
    $query->distinct();
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
    if (isset($page))
    {
        $query->range(8 * $page, $limit);
    }
    else
    {
        $query->range(0, $limit);
    }

    $result = $query->execute();


    if ($result->rowCount())
    {
        $output = _db_result_to_array($result);
        return $output;
    }

    return;

}

function add_events_tab($tid, $page, $limit = 8){

    $query = db_select('taxonomy_index', 'a');
    $query->distinct();
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
    if (isset($page))
    {
        $query->range(8 * $page, $limit);
    }
    else
    {
        $query->range(0, $limit);
    }

    $result = $query->execute();


    if ($result->rowCount())
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

        if($field_name == 'event_start_date')
        {

            $time = strtotime($field_value);

            $date = date('d/F/Y',$time);

            $date = explode('/',$date);

            $date[1] = t($date[1]);

            $date = $date[0] . ' ' . $date[1] . ' ' . $date[2];

            $node->{$field_name} = $date;

        }

        if ($field_name == 'published_at')
        {
            $date = date('d/F/Y', $field_value);

            $date = explode('/',$date);

            $date[1] = t($date[1]);

            $date = $date[0] . ' ' . $date[1] . ' ' . $date[2];

            $node->{$field_name} = $date;
        }

    }

    return $node;

}
