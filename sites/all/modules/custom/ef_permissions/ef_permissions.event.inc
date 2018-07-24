<?php


function ef_permissions_node_access($node, $op, $account){

  if(isset($node->type) && $node->type == 'ef_event' && in_array('Event Administrator', $account->roles)){
    return NODE_ACCESS_ALLOW;
  }

}
