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
$email_subjet= strip_tags($content['title_field'][0]['#markup']);
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

$bytes = $content['field_pdf_presentation']['#items'][0]['filesize'];

function formatSizeUnits($bytes)
    {
        if ($bytes >= 1073741824)
        {
            $bytes = number_format($bytes / 1073741824, 2) . ' GB';
        }
        elseif ($bytes >= 1048576)
        {
            $bytes = number_format($bytes / 1048576, 2) . ' MB';
        }
        elseif ($bytes >= 1024)
        {
            $bytes = number_format($bytes / 1024, 2) . ' KB';
        }
        elseif ($bytes > 1)
        {
            $bytes = $bytes . ' bytes';
        }
        elseif ($bytes == 1)
        {
            $bytes = $bytes . ' byte';
        }
        else
        {
            $bytes = '0 bytes';
        }

        return $bytes;
}

$bytes = formatSizeUnits($bytes);
$path_extension = $content['field_pdf_presentation'][0]['#preview_path'];
$ext  = (new SplFileInfo($path_extension))->getExtension();



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

    <?php if (isset($content['field_ef_related_content'][0]['#markup']) || isset($content['field_related_taxonomy'][0]['#markup']) || ($countview  > 0)): ?>
    <section class="large-9 columns blog-presentation-content">
    <?php else: ?>
    <section class="large-12 columns">
    <?php endif; ?>     
        <div class="row">
            <div class="ds-node-metadata">
               
                    <div class="field field-name-published-on">
                        <div class="label-inline">
                            <?php print $content['published_on'][0]['#markup']; ?>
                        </div>
                    </div>
                    <div class="field field-name-content-type">
                        <div class="label-inline">
                            <?php print  $node->type; ?>
                        </div>
                    </div>
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
                    <?php if(count($content['field_ef_topic']['#items'])): ?>
                        <div class="field field-name-field-ef-topic">
                            <div class="label-inline">
                                <?php print t("Topic:") ?>&nbsp;
                            </div>
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

        <div class="topic-abstract">
            <?php print $content['field_abstract'][0]['#markup']?>
            <div class="content-pdf-viewer">
                <?php print render($content['field_pdf_presentation']);?>
            </div>
            <div class="name-pdf">
                <a href="<?php print $content['field_pdf_presentation'][0]['#preview_path'] ?>">
                    
                    <?php print t("Download"); ?> <span class="presentation-extension"><?= $ext?> </span>(<?php print $bytes ?>)
                </a>
            </div>
            <div class="content-description">
                <span class="description"><?php print $content['field_pdf_description'][0]['#markup'] ?></span>
            </div>
        </div>
        <br>
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
        <?php if ($countview  > 0): ?>  
        <h2>
            <span class="author-name-right"><?= $content['field_ef_publ_contributors'][0]['#title']; ?></span>
        </h2>
        <div class="author-view">
            <?php print views_embed_view('authors_as_metadata','page_2', $content['field_ef_publ_contributors']['#object']->field_ef_publ_contributors['und'][0]['tid']); ?>
        </div>
        <?php endif; ?>
        <?php if ($node->field_related_taxonomy['und'][0]['target_id'] != '' || $node->field_ef_related_content['und'][0]['target_id'] != '' ) : ?>
            <div class="related-content-aside-3">
                <?php
                    $block = block_load('block','54');
                    print drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
                ?>
            </div>
        <?php endif; ?>
    </aside>

<script>
    //Delete the src iframe language from Drupal 
    jQuery('.content-pdf-viewer iframe').attr('src',jQuery('.content-pdf-viewer iframe').attr('src').replace('/<?php print $language->language ?>', ''));

    //Delete the href button download language from Drupal 
    jQuery('.name-pdf a').attr('href',jQuery('.name-pdf a').attr('href').replace('/<?php print $language->language ?>', ''));
</script>































