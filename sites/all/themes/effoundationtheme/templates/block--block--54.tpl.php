<section class="block block-views">
  <h2 class="block-title">Related content</h2>
  <?php
    $node = menu_get_object();

    if (is_null($node)) {
      if (strpos($_SERVER["REQUEST_URI"], "/topic/") == 0) {
        $term=str_replace("/topic/", "", $_SERVER["REQUEST_URI"]);
        $termname = str_replace("-", " ", $term);
        
        $node=taxonomy_get_term_by_name($termname);

        foreach ($node as $key => $value) {
          $nid=$key;
        }

        $weight=array();

        $query = db_select('related_content_and_taxonomies', 'rc');
            $query->fields('rc', array("rc_weight", "rc_id", "rc_type", "nid"));
            $query->condition('rc.nid', $nid, "=");
            $query->orderBy('rc.rc_weight', 'ASC');
            $result=$query->execute();
      }
    }else{
      $nid=$node->nid;
      $weight=array();
      
      if (substr($_SERVER["REQUEST_URI"], -6, 6)=="/draft") {
         $current_revision=$node->workbench_moderation["current"]->vid;
      }else{
         $current_revision=$node->vid;
      }

        $query = db_select('related_content_and_taxonomies', 'rc');
        $query->fields('rc', array("rc_weight", "rc_id", "rc_type", "nid"));
        $query->leftJoin('workbench_moderation_node_history', 'wbm', 'rc.revision_id = wbm.vid');
        $query->condition('rc.revision_id', $current_revision, "=");
        $query->orderBy('rc.rc_weight', 'ASC');
        $result=$query->execute();  
    }

    //random numbers to dont match
      $nt=1000;
      $nc=5000;
    while($record = $result->fetchAssoc()) {
      //ORDER: --FIRST BY WEIGHT --SECOND BY 
      /*//Order first taxonmies
      if ($record["rc_type"]=="tax") {
        $nt++;
        $order_type=$nt;
      }else{
        $nc++;
        $order_type=$nc;
      }
      $weight[$record["rc_weight"]][$order_type] = $record["rc_id"];*/
      if ($record["rc_type"]=="tax") {
        $weight[0][$record["rc_id"]] = $record["rc_id"];
      }else{
        $weight[1][$record["rc_id"]] = $record["rc_id"];
      }
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
            $query = db_select('related_content_and_taxonomies', 'rc');
            $query->fields('rc', array("rc_type"));
            $query->condition('rc.nid', $nid, "=");
            $query->condition('rc.rc_id', $value, "=");
            $result_ex=$query->execute();

            while($record = $result_ex->fetchAssoc()) {
              if ($record["rc_type"]=="tax") {
                $is_nodo=false;
              }else{
                $is_nodo=true;
              }
            }

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
                else {
                
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
            
              
              $name = $type;

              
              //New Content Type Formats
              if ($name=="page" || $name=="board_member_page" || $name=="ef_network_extranet_page") {
                $name=t("Page");
              }elseif($name=="blog"){
                $name=t("Blog");
              }elseif($name=="ef_call_for_tender"){
                $name=t("Call for tender");
              }elseif($name=="ef_working_life_country_profiles"){
                $name=t("Country");
              }elseif($name=="cwb_series" || $name=="data_explorer_page" || $name=="dvs_survey") {
                $name=t("Data");
              }elseif($name=="ef_report"){
                $name=t("Article");
              }elseif($name=="ef_erm_regulation"){
                $name=t("Legislation");
              }elseif($name=="erm_support_instrument"){
                $name=t("Support instrument");
              }elseif($name=="ef_event"){
                $name=t("Event");
              }elseif($name=="ef_factsheet"){
                $name=t("Restructuring event");
              }elseif($name=="ef_ir_dictionary"){
                $name=t("Dictionary");
              }elseif($name=="ef_news"){
                $name=t("News");
              }elseif($name=="ef_publication"){
                $name=t("Publication");
              }elseif($name=="ef_survey"){
                $name=t("Survey");
              }elseif($name=="presentation"){
                $name=t("Presentation");
              }elseif($name=="ef_annual_progress_report" 
                  || $name=="article"
                  || $name=="ef_case_study"
                  || $name=="case_study_publication"
                  || $name=="ef_comparative_analytical_report"
                  || $name=="ef_contact_form"
                  || $name=="cwb_level_coordination"
                  || $name=="cwb_country_info"
                  || $name=="timeline_date"
                  || $name=="cwb_time_series"
                  || $name=="cwb_series"
                  || $name=="ef_emire_dictionary"
                  || $name=="ef_ic_quarterly_report"
                  || $name=="ef_input_to_erm"
                  || $name=="ef_national_contribution"
                  || $name=="ef_network_quarterly_report"
                  || $name=="panel"
                  || $name=="ef_photo_gallery"
                  || $name=="ef_project"
                  || $name=="ef_quarterly_report"
                  || $name=="ef_regulation"
                  || $name=="ef_restructuring_in_smes"
                  || $name=="simplenews"
                  || $name=="ef_spotlight_entry"
                  || $name=="ssi_services"
                  || $name=="ef_support_instrument"
                  || $name=="ef_survey"
                  || $name=="ef_vacancy"
                  || $name=="ef_video"
                  || $name=="webform"){
                $name="";
              }


            //Publication date
              $date_ts = $node_ittem->published_at;
              $date = date('d F Y', $date_ts);

            //Delete date when the content type is in array
              $delete_date_in=array("page", "board_member_page", "ef_working_life_country_profiles", "data_explorer_page", "dvs_survey", "ef_ir_dictionary", "ef_network_extranet_page", "ef_survey");
              if (in_array($node_ittem->type, $delete_date_in)) {
                $date="";
              }

              

              if ($is_nodo){
                //If the node isn't unpublished
                if($node_ittem->status != 0){
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
                          <?php if(isset($country)): ?>
                            <li class="list-country">
                              <?php echo $country; ?>
                            </li>
                          <?php endif; ?>
                          <?php if($name != ''): ?>
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
                }
              }else{
                //Get Taxonmy name
                  $sql = db_select('taxonomy_term_data','t');
                  $sql->fields('t',array('name','tid', 'vid'));
                 
                  $sql->condition('t.tid', $value, '=');
                  $title = $sql->execute()->fetchAll(); 
                //ALIAS HREF
                  $path = 'taxonomy/term/'.$value;
                  $alias = url($path, array("absolute"=>TRUE));

                  $vocabulary_name = taxonomy_vocabulary_load($title[0]->vid);

                  if($vocabulary_name->name ==  'Authors'){
                    $alias = str_replace('authors', 'author', $alias);
                    $vocabulary_name->name = "Author";
                  }

                  if($vocabulary_name->name ==  'Observatories'){
                    $alias = str_replace('default/', '', $alias);
                    $vocabulary_name->name = "Observatory";
                  }

                  if($vocabulary_name->name ==  'Sectors'){
                    $vocabulary_name->name = "Sector";
                  }

                  if($vocabulary_name->name ==  'Topics'){
                    $vocabulary_name->name = "Topic";
                  }
                  
                //Paint HTML
                ?>
                  <li class="views-row views-row-1 views-row-odd views-row-first"> 
                    <a href="<?php echo $alias; ?>">
                      <?php echo $title[0]->name; ?>
                    </a> 
                    <ul class="metadata-items inline-list">
                      <li class="list-delib-kind fix-padding">
                        <?php
                          print $vocabulary_name->name;
                        ?>
                      </li>
                    </ul>
                  </li>
                <?php 
              }
        } 
    ?>
 
</section>