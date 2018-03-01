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

drupal_add_css('sites/all/themes/effoundationtheme/css/blog-presentation.css');
drupal_add_js('sites/all/themes/effoundationtheme/js/blog-presentation.js');

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

    <div class="email-blog">
        <a href="mailto:?subject=<?= $email_subjet; ?>&body=<?php  print t(""); ?>%0D%0A%0D%0A<?php  print $email_link; ?>">
            <i class="fa fa-envelope-o block-easy-social-email" aria-hidden="true"></i>
        </a>
    </div>
    <?php if (isset($last_updated)): ?>
    <span class="last-updated"><?= $last_updated; ?></span>
    <?php endif; ?>

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

    <?php if (isset($content['field_ef_related_links_block'][0]['#markup']) || ($countview  > 0)): ?>
    <section class="large-9 columns blog-presentation-content">
    <?php else: ?>
    <section class="large-12 columns">
    <?php endif; ?>     
        <div class="row">
            <div class="ds-node-metadata">

                <div class="field field-name-published-on">
                    <div class="label-inline">
                        <?php print t("Scheduled record delivery date: ").$content['published_on'][0]['#markup']; ?>
                    </div>
                </div>

                <?php if (isset($node->field_ef_approved_for_payment["und"][0]["value"])) : ?>
                    <div class="field field_ef_approved_for_payment">
                        <div class="label-inline">
                            <?php 
                                 $date = new DateTime($node->field_ef_approved_for_payment["und"][0]["value"]);
                                 $date_format=$date->format('l, F j, o');
                                 print t("Approved for payment: ").$date_format; 
                            ?>
                        </div>
                    </div>
                <?php endif; ?>

                <?php if (isset($node->field_ef_topic["und"][0]["tid"])) : ?>
                    <div class="field field_ef_topic">
                        <div class="label-inline">
                            <?php 
                                print t("Topic: ");
                                if (isset($node->field_ef_topic[$language->language])) {
                                    foreach ($node->field_ef_topic[$language->language] as $key => $topic){
                                        $path=taxonomy_term_uri($topic["taxonomy_term"]);
                                        $taxonomy_path=drupal_lookup_path('alias', $path); 
                                        ?>
                                            <a href="<?php echo $taxonomy_path; ?>"><?php echo $topic["taxonomy_term"]->name; ?></a>
                                        <?php
                                    }
                                }else{
                                    foreach ( $node->field_ef_topic["und"] as $key => $topic ){ 
                                        $path=taxonomy_term_uri($topic["taxonomy_term"]);
                                        $taxonomy_path=drupal_lookup_path('alias', $path);
                                        ?>
                                            <a href="<?php echo $taxonomy_path; ?>"><?php echo $topic["taxonomy_term"]->name; ?></a>
                                        <?php
                                    } 
                                }
                            ?>
                        </div>
                    </div>
                <?php endif; ?>

                 <?php if (isset($node->uid)) : ?>
                    <div class="field uid">
                        <div class="label-inline">
                            <?php 
                                 $user_load=user_load($node->uid);
                                 print t("Assign to User: ".$user_load->name); 
                            ?>
                        </div>
                    </div>
                <?php endif; ?>

                <?php if (isset($node->field_ef_author_contract["und"][0]["taxonomy_term"]->name)) : ?>
                    <div class="field field_ef_author_contract">
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

                <?php /*if(count($content['field_ef_topic']['#items'])): ?>
                    <div class="field field-name-field-ef-topic">
                    <div class="label-inline"><?php print t("Topic:") ?>&nbsp;</div>
                        <?php for($i=0; $i < count($content['field_ef_topic']['#items']); $i++): ?>
                            <?php $result = db_query("SELECT a.alias FROM url_alias a WHERE a.source ='" . $content['field_ef_topic'][$i]['#href'] . "'")->fetchAll(); ?>
                            <?php if ($language->language != 'en'): ?> 
                            <a href="/<?php print $language->language;?>/<?php print $result[0]->alias; ?>" >
                                <?php print $content['field_ef_topic'][$i]['#title']; ?>
                            </a>
                            <?php else: ?>
                            <a href="/<?php print $result[0]->alias; ?>" >
                                <?php print $content['field_ef_topic'][$i]['#title']; ?>
                            </a>    
                            <?php endif; ?>
                        <?php endfor; ?>
                     </div>      
                <?php endif; */ ?>

                <?php if (isset($node->field_ef_topic["und"][0]["taxonomy_term"]->field_term_last_updated["und"][0]["value"])) : ?>
                    <div class="field field_term_last_updated">
                        <div class="label-inline">
                            <?php 
                                $timestamp=$node->field_ef_topic["und"][0]["taxonomy_term"]->field_term_last_updated["und"][0]["value"];
                                $date=date("Y-m-d", $timestamp);
                                print t("Date of last submission: ").$date;
                            ?>
                        </div>
                    </div>
                <?php endif; ?>

                <?php if (isset($node->workbench_moderation["current"]->stamp)) : ?>
                    <div class="field field_term_last_updated">
                        <div class="label-inline">
                            <?php 
                                $publish_on=$node->workbench_moderation["current"]->stamp;
                                $publish_on=date("Y-m-d", $publish_on);
                                print t("Published on: ").$publish_on;
                            ?>
                        </div>
                    </div>
                <?php endif; ?>

                <div class="field field-name-field-ef-author">
                    <div class="label-inline"><?php print t("Author:") ?>&nbsp;</div>
                    <?php foreach ($content['field_ef_publ_contributors']['#items'] as $key => $author): ?>
                        <a href="<?= url($content['field_ef_publ_contributors'][$key]['#href']); ?>"><?= $content['field_ef_publ_contributors'][$key]['#title']; ?></a>
                    <?php endforeach; ?>
                </div>
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
            </div>
        </div>

        <?php 
            print drupal_render($content["qrr"]);
        ?>

        <div class="topic-abstract">
            <?php if (isset($content['field_ef_main_image'][0]['#item']['filename'])): ?>
               <p>
                <img width="250" src="/sites/default/files/<?php print $content['field_ef_main_image'][0]['#item']['filename'] ?>">
               </p>
            <?php else: ?>
                <?php if(isset($variables['summary'])): ?>
                <p>
                 <img src="/<?= drupal_get_path('module','ef_topics_page') . '/images/img-no-available.jpg'; ?>">
                </p>
                <?php endif; ?>  
            <?php endif; ?>
            <?php print $content['field_abstract'][0]['#markup']?>
        </div>
        <div>
            <?php print $content['body'][0]['#markup'] ?>
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
    </section>
   
    
    
    <aside class="large-3 columns blog-presentation">   
        <?php if ($countview > 0): ?>
            <h2>
                <span class="author-name-right"><?= $content['field_ef_publ_contributors'][0]['#title']; ?></span>
            </h2>
            <div class="author-view">
                <?php
               
                 print views_embed_view('authors_as_metadata','page_2', $content['field_ef_publ_contributors']['#object']->field_ef_publ_contributors['und'][0]['tid']); ?>
            </div>
        <?php endif; ?>
        <div class="related-links-block">
            <?php print ($content['field_ef_related_links_block'][0]['#markup']); ?>
        </div>
    </aside>