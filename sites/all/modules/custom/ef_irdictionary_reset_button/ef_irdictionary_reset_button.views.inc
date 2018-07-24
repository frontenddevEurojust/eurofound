<?php

function ef_irdictionary_reset_button_views_query_alter(&$view, &$query){

  if($view->name == 'ef_ir_dictionary'){

    // The value has both % added. Initial and final character for LIKE type query. Only intermediate spaces should be replaced
    // Need to have %a%b%c% type of query and NOT %a% || %b% || %c%
    if($view->exposed_input['combine'] != ''){

      $text = $view->query->where[1]['conditions'][0]['value'][':views_combine'];
      $text = str_replace(" ", "%", $text);

      $view->query->where[1]['conditions'][0]['value'][':views_combine'] = $text;

      if($_SESSION['IR_only_title']){
        $query->where[1]['conditions'][0]['field'] = 'node.title LIKE :views_combine';
        $_SESSION['IR_only_title'] = FALSE;
      }

      }
    }


}
