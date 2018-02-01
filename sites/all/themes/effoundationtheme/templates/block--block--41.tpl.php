<section class="block block-views">
  <h2 class="block-title">Related content</h2>
  <?php
    $node = menu_get_object();

    if (is_null($node)) {
      if (strpos($_SERVER["REQUEST_URI"], "/topic/") == 0) {
        $term=str_replace("/topic/", "", $_SERVER["REQUEST_URI"]);
        $node=taxonomy_get_term_by_name($term);

        foreach ($node as $key => $value) {
          $nid=$key;
        }
      }
    }else{
      $nid=$node->nid;
    }

    dpm($node);

    $weight=array();

    $query = db_select('related_content_and_taxonomies', 'rc');
        $query->fields('rc', array("rc_weight", "rc_id"));
        $query->condition('rc.nid', $nid, "=");
        $result=$query->execute();

    while($record = $result->fetchAssoc()) {
      $weight[$record["rc_weight"]][$record["rc_id"]] = $record["rc_id"];
    }

    //Format Weight
    ksort($weight);
    $weight_final=array();
    foreach ($weight as $key1 => $value1) {
      foreach ($weight[$key1] as $key2 => $value2) {
        array_push($weight_final, $value2);
      }
    }
  ?>
  <ul class="item-list">
    <?php 
      //Oder the content by real weight
        foreach ($weight_final as $node => $value) {
            $name="";
            $date="";
            $node_ittem=node_load($value);
            $array = array("blog", "ef_news", "page", "ef_publication", "ef_event", "ef_case_study", "ef_spotlight_entry", "ef_photo_gallery", "ef_video", "ef_vacancy", "ef_call_for_tender", "ef_project", "ef_survey", "ef_comparative_analytical_report", "ef_national_contribution", "ef_report", "ef_ir_dictionary", "ef_input_to_erm", "board_member_page", "ef_emire_dictionary", "ef_factsheet", "ef_network_extranet_page", "ef_working_life_country_profiles", "presentation");
              //Country 
                if(($node_ittem->type == 'ef_comparative_analytical_report') || $node_ittem->type == 'ef_publication'){
                  $iso2 = $node_ittem->field_ef_eu_node_ittem_countries;
                  $variable = $iso2['und'][0]['iso2'];
                 
                  $sql = db_select('node', 'n');
                  $sql->join('field_data_field_ef_eu_related_countries', 'c', 'c.entity_id = n.nid');
                  $sql->join('countries_country', 'cc', 'c.field_ef_eu_related_countries_iso2 = cc.iso2');
                  $sql->fields('cc', array('name'));
                  $sql->condition('n.nid', $node_ittem->nid, '=');
                  $sql->condition('cc.iso2', $variable, '=');
                  $sql->distinct();
                  
                  $country = $sql->execute()->fetchAll();  
                }
                elseif (($node_ittem->type == 'ef_ic_quarterly_report') || ($node_ittem->type == 'ef_network_quarterly_report')) {
                  $iso2 = $node_ittem->field_ef_eu_related_countries;
                  $variable = $iso2['und'][0]['iso2'];

                  $sql = db_select('node', 'n');
                  $sql->join('field_data_field_ef_quarter_report_country', 'c', 'c.entity_id = n.nid');
                  $sql->join('countries_country', 'cc', 'c.field_data_field_ef_quarter_report_country.iso2 = cc.iso2');
                  $sql->fields('cc', array('name'));
                  $sql->condition('n.nid', $node_ittem->nid, '=');
                  $sql->condition('cc.iso2', $variable, '=');
                  $sql->distinct();
                  
                  $country = $sql->execute()->fetchAll(); 
                }
                elseif (in_array($node_ittem->type,$array)){
                
                  $iso2 = $node_ittem->field_ef_country;
                
                  $variable = $iso2['und'][0]['iso2'];
                  
                  $sql = db_select('node','n');
                  $sql->join('field_data_field_ef_country','c','c.entity_id = n.nid');
                  $sql->join('countries_country','cc','c.field_ef_country_iso2 = cc.iso2');
                  $sql->fields('cc',array('name'));
                  $sql->condition('n.nid', $node_ittem->nid, '=');
                  $sql->condition('cc.iso2',$variable,'=');
                  $sql->distinct();

                  $country = $sql->execute()->fetchAll(); 
                  
                }  
                $country=$country[0]->name;
            //Get Delib Kind 
              //Content type
              $type = $node_ittem->type;

              // deliverable kinds
              $tid = $node_ittem->field_ef_deliverable_kind['und'][0]['tid'];
              $term = taxonomy_term_load($tid);

              if(!empty($tid)){
                $name = $term->name;
              }else{
                $name = $type;
                if($name == 'page'){
                  $name = 'Page';
                }
                $name = str_replace("ef_","EF ",$name);
                $name = str_replace("_"," ",$name);
              }

              if($tid == 13742 || $tid == 13743 || $tid  == 13770 || $tid == 20209 || $tid == 13159 ){
                $name = 'Research in Focus';
              }elseif($tid == 13744){
                $name = 'Comparative Analytical Report';
              }elseif($tid == 13745){
                $name = 'Annual Update';
              }elseif($tid == 13746){
                $name = 'Representativeness Study';
              }
            //Publication date
              $date_ts = $node_ittem->published_at;
              $date = date('d F Y', $date_ts);
              if (in_array($node_ittem->type,$array)){
                //ALIAS HREF
                  $path = 'node/'.$node_ittem->nid;
                  $alias = url($path, array("absolute"=>TRUE));

                //Paint HTML
                    ?>
                      <li class="views-row views-row-1 views-row-odd views-row-first">  
                        <a href="<?php echo $alias; ?>">
                          <?php echo $node_ittem->title; ?>
                        </a>    
                            
                        <ul class="metadata-items inline-list">

                          <li class="list-country">
                            <?php echo $country; ?>
                          </li>

                          <?php if(isset($name)): ?>
                            <li class="list-delib-kind">
                              <?php echo $name; ?>
                            </li>
                          <?php endif; ?>

                          <?php if(isset($date)): ?>
                            <li class="list-pub-date">
                              <?php echo $date; ?>
                            </li>
                          <?php endif; ?>

                        </ul>  
                      </li>
                    <?php 
              }else{
                //Get Taxonmy name
                  $sql = db_select('taxonomy_term_data','t');
                  $sql->fields('t',array('name'));
                  $sql->condition('t.tid', $value, '=');
                  $title = $sql->execute()->fetchAll(); 
                //ALIAS HREF
                  $path = 'taxonomy/term/'.$value;
                  $alias = url($path, array("absolute"=>TRUE));
                //Paint HTML
                ?>
                  <li class="views-row views-row-1 views-row-odd views-row-first">  
                    <a href="<?php echo $alias; ?>">
                      <?php echo $title[0]->name; ?>
                    </a>    
                  </li>
                <?php 
              }
        } 
    ?>
  </ul> 
</section>