<?php
/**
 * $variables contains all available data
 *
 *
 * @see template_preprocess_ef_topics_page()
 *
 */

global $language;
global $base_url; 

$author = $content['field_ef_publ_contributors'][0]['#markup'];
$link = str_replace(', ', '_', $author);
$author = explode('_', $link);

if (isset($author[1]))
{
    $query = db_select('users', 'a');
    $query->innerJoin('field_data_field_ef_first_name', 'c', 'a.uid = c.entity_id');
    $query->leftJoin('field_data_field_ef_organisation', 'b', 'a.uid = b.entity_id');
    $query->fields('a');
    $query->addField('b', 'field_ef_organisation_value', 'organisation');
    $query->condition('c.field_ef_first_name_value', $author[1], '=');
    $query->innerJoin('field_data_field_ef_last_name', 'd', 'a.uid = d.entity_id');
    $query->condition('d.field_ef_last_name_value', $author[0], '=');
}
else
{
    $query = db_select('users', 'a');
    $query->innerJoin('field_data_field_ef_first_name', 'c', 'a.uid = c.entity_id');
    $query->leftJoin('field_data_field_ef_organisation', 'b', 'a.uid = b.entity_id');
    $query->fields('a');
    $query->condition('c.field_ef_first_name_value', $author[0], '=');
}

$user_data = $query->execute()->fetchObject();
$email_subjet= strip_tags($content['title'][0]['#markup']);
$nodeurl = url('node/'. $node->nid);
$email_link = $base_url.$nodeurl;
$image = file_load($user_data->picture);

$image_url = image_style_url('thumbnail', $image->uri);


$blog_presentation_author_view = views_embed_view('authors_as_metadata','page_2', $content['field_ef_publ_contributors'][0]['#title']);

$blog_presentation_find = strpos($blog_presentation_author_view,'No results were found. Please try again');

$terms = taxonomy_get_term_by_name($content['field_ef_publ_contributors'][0]['#title'], $vocabulary = 'ef_publication_contributors');
$term = $terms[key($terms)];

$result = views_get_view_result('authors_as_metadata', 'page_2' ,  $term->tid , $node->nid );
$countview = count($result);

?>

    <?php if ($show_menu): ?>
        <ul class="button-group">
            <?php foreach ($variables['admin_menu'] as $item_name => $url): ?>
                <?php if($item_name == 'View'): ?>
                <li class="active"><a href="<?= $url; ?>" class="active small button secondary" ><?= str_replace("_"," ",$item_name); ?></a></li>
                <?php else: ?>
                <li><a href="<?= $url; ?>" class="small button secondary" ><?= str_replace("_"," ",$item_name); ?></a></li>
                <?php endif; ?>
            <?php endforeach; ?>
        </ul>
    <?php endif; ?>

   
   
        <div class="row">
            <div class="ds-node-metadata">

                <?php if ( user_access("view field_ef_report_delivery_date") && isset($content['field_ef_report_delivery_date'][0]['#markup']) ) : ?>
                    <div class="field field-name-published-on">
                        <div class="label-inline">
                            <?php print t("Scheduled record delivery date: ") . $content['field_ef_report_delivery_date'][0]['#markup']; ?>
                        </div>
                    </div>
                <?php endif; ?>

                <?php if (isset($node->field_ef_approved_for_payment["und"][0]["value"]) && user_access("view field_ef_approved_for_payment") ) : ?>
                    <div class="field field_ef_approved_for_payment">
                        <div class="label-inline">
                            <?php 
                                 $date = new DateTime($node->field_ef_approved_for_payment["und"][0]["value"]);
                                 $date_format = $date->format('d F Y');
                                 print t("Approved for payment: ").$date_format; 
                            ?>
                        </div>
                    </div>
                <?php endif; ?>

                <?php if (isset($node->field_ef_topic["und"][0]["tid"]) ) : ?>
                    <div class="field field_ef_topic">
                        <div class="label-inline">
                            <?php 
                                print t("Topic: ");
                                if (isset($node->field_ef_topic[$language->language])) {
                                    foreach ($node->field_ef_topic[$language->language] as $key => $topic){
                                        $path = taxonomy_term_uri($topic["taxonomy_term"])['path'];
                                        $taxonomy_path = drupal_get_path_alias($path); 
                                        ?>
                                            <a href="/<?php echo $taxonomy_path; ?>"><?php echo $topic["taxonomy_term"]->name; ?></a>
                                        <?php
                                    }
                                }else{
                                    foreach ( $node->field_ef_topic["und"] as $key => $topic ){ 
                                        $path = taxonomy_term_uri($topic["taxonomy_term"])['path'];
                                        $taxonomy_path = drupal_get_path_alias($path); 
                                        ?>
                                            <a href="/<?php echo $taxonomy_path; ?>"><?php echo $topic["taxonomy_term"]->name; ?></a>
                                        <?php
                                    } 
                                }
                            ?>
                        </div>
                    </div>
                <?php endif; ?>

                 <?php if (isset($node->uid) && user_access("view field_ef_author") ) : ?>
                    <div class="field uid">
                        <div class="label-inline">
                            <?php 
                                 $user_load=user_load($node->uid);
                                 print t("Assign to User: ".$user_load->name); 
                            ?>
                        </div>
                    </div>
                <?php endif; ?>

                <?php if (isset($node->field_ef_author_contract["und"][0]["taxonomy_term"]->name) && user_access("view field_ef_contract") ) : ?>
                    <div class="field field-ef-author-contract">
                        <div class="label-inline">
                            <?php 
                                 $contract_name=$node->field_ef_author_contract["und"][0]["taxonomy_term"]->name;
                                 $path=taxonomy_term_uri($node->field_ef_author_contract["und"][0]["taxonomy_term"]);
                                 $taxonomy_path=drupal_lookup_path('alias', $path); 
                                 print t("Contract: "); 
                                 ?>
                                    <a href="<?php echo $taxonomy_path; ?>"><?php echo $contract_name; ?></a>
                                <?php
                            ?>
                        </div>
                    </div>
                <?php endif; ?>

                <?php if (isset($content['ds_submission_date'][0]['#markup']) && !in_array('anonymous user', $user->roles)) : ?>
                    <div class="field field-ds-submission-date">
                        <div class="label-inline">
                            <?php 
                                print t("Date of last submission: ") . $content['ds_submission_date'][0]['#markup'];
                            ?>
                        </div>
                    </div>
                <?php endif; ?>

                <?php if (isset($content['published_on'][0]['#markup'])) : ?>
                    <div class="field field_term_last_updated">
                        <div class="label-inline">
                            <?php 
                                print t("Published on: ") . $content['published_on'][0]['#markup'];
                            ?>
                        </div>
                    </div>
                <?php endif; ?>
                
                <?php if (isset($content['field_ef_publ_contributors']['#items'])) : ?>
                    <div class="field field-name-field-ef-author">
                        <div class="label-inline"><?php print t("Author:") ?>&nbsp;</div>
                        <?php foreach ($content['field_ef_publ_contributors']['#items'] as $key => $author): ?>
                            <?php if (check_if_author_has_publications($author["taxonomy_term"])): ?>
                                    <a class="author-report" href="<?= url($content['field_ef_publ_contributors'][$key]['#href']); ?>">
                                        <?= trim( $author["taxonomy_term"]->name_field["und"][0]["value"] ); ?>
                                    </a> 
                                    <?php if($author != end($content['field_ef_publ_contributors']['#items']) ){
                                           print'<span class="semicolon">;</span>';
                                    }; ?>
                            <?php else: ?>
                                    <span class="author-report"><?= trim( $author['taxonomy_term']->name_field['und'][0]['value']); ?></span>
                                    <?php if($author != end($content['field_ef_publ_contributors']['#items']) ){
                                           print'<span class="semicolon">;</span>';
                                    }; ?>
                            <?php endif; ?>
                        <?php endforeach; ?>
                    </div>
                <?php endif; ?>

                <?php if(($content['field_show_permalink']['#items'][0]['value']) != 0): ?>
                     <div class="field field-permalink">
                        <div class="label-inline">
                            <?php print t("Permalink") ?>:&nbsp;
                        </div>
                        <div class="label-content">
                            <a href="<?= url($content['field_permalink']['#items'][0]['url']); ?>">
                                <?= $content['field_permalink']['#items'][0]['title']; ?>
                            </a>
                        </div>
                    </div>
                <?php endif; ?>
                <?php if( isset($content['field_ef_reference_no']) && !empty($content['field_ef_reference_no']) ){ ?>
                        <div class="field field-permalink">
                            <div class="label-inline">
                                <?php print t("Reference nº") ?>:&nbsp;
                            </div>
                            <div class="label-content">
                                    <?= $content['field_ef_reference_no']["#items"][0]["value"]; ?>
                            </div>
                        </div>
                    <?php } ?>

                    <?php if( isset($content['field_ef_doi']) && !empty($content['field_ef_doi']) ){ ?>
                        <div class="field field-permalink">
                            <div class="label-inline">
                                <?php print t("DOI") ?>:&nbsp;
                            </div>
                            <div class="label-content">
                                    <?= $content['field_ef_doi']["#items"][0]["value"];  ?>
                            </div>
                        </div>
                    <?php } ?>
            </div>
        </div>
        <div class="row">
            <?= drupal_render($content["links"]); ?>
        </div>
        
        <div class="float-img-render">
            <?= drupal_render($content["field_ef_main_image"]); ?> 
            <?php if(isset($variables['summary'])): ?>
                <p>
                 <img src="/<?= drupal_get_path('module','ef_topics_page') . '/images/img-no-available.jpg'; ?>">
                </p>
            <?php endif; ?>         
            <?= drupal_render($content["qrr"]); ?>
            
            <?php print $content['field_abstract'][0]['#markup']?>
            <?php print $content['body'][0]['#markup'] ?>
            <div class="ds-node-downloads">
                <?= drupal_render($content['field_ef_documents']); ?>
                <?= drupal_render($content['field_ef_source_documents']); ?>
            </div>
        </div>
     
        <!-- FREE COMMENTS -->
        <?php if(in_array('anonymous user', $user->roles) || in_array('administrator', $user->roles)): ?>
            <div class="ds-node-comments">
                <div class="ef-comment-toggler toggler">
                    <span class="show-text">Useful? Interesting? Tell us what you think.</span>
                    <span class="hide-text">Hide comments</span>
                </div>
                <div id="comments" class="title comment-wrapper">
                    <h3><?php print t("Eurofound welcomes feedback and updates on this regulation"); ?></h3>
                    <?php print render($content['comments']);?>
                </div>
            </div>
        <?php endif; ?>
