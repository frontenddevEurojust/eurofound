<?php
/**
 * $variables contains all available data
 *
 *
 * @see template_preprocess_ef_topics_page()
 *
 */
global $language;

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

$image = file_load($user_data->picture);

$image_url = image_style_url('thumbnail', $image->uri);

$blog_presentation_author_view = views_embed_view('authors_as_metadata','page_2', $content['field_ef_publ_contributors'][0]['#markup']);
$blog_presentation_find = strpos($blog_presentation_author_view,'No results were found. Please try again');


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

dpm($content);

?>

<!DOCTYPE html>
<html>
<body>
    <div class="email-blog">
        <a href="mailto:<?= $user_data->mail; ?>">
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

    <?php if (isset($content['field_ef_related_links_block'][0]['#markup']) || ($blog_presentation_find === false)): ?>
    <section class="large-9 columns blog-presentation-content">
    <?php else: ?>
    <section class="large-12 columns">
    <?php endif; ?>     
        <div class="row">
            <div class="ds-node-metadata">
                <div class="field field-name-field-ef-topic">
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
                        <div class="label-inline"><?php print t("Author:") ?>&nbsp;</div><a href="/author/<?= $link; ?>"><?= $content['field_ef_publ_contributors'][0]['#markup']; ?></a>
                    </div>
                    <div class="field field-name-field-ef-author">
                        <?php if(count($content['field_ef_topic']['#items'])): ?>
                            <?php print t("Topic:") ?>&nbsp;
                            <?php for($i=0; $i < count($content['field_ef_topic']['#items']); $i++): ?>
                                <?php if ($language->language != 'en'): ?> 
                                <a href="/<?php print $language->language;?>/<?php print $content['field_ef_topic'][$i]['#href']; ?>" >
                                    <?php print $content['field_ef_topic'][$i]['#title']; ?>
                                </a>
                                <?php else: ?>
                                <a href="/<?php print $content['field_ef_topic'][$i]['#href']; ?>" >
                                    <?php print $content['field_ef_topic'][$i]['#title']; ?>
                                </a>    
                                <?php endif; ?>
                            <?php endfor; ?>
                        <?php endif; ?>
                    </div>             
                </div>
            </div>
        </div>
        <div class="topic-abstract">
            <?php print $content['field_abstract'][0]['#markup']?>
            <div class="content-pdf-viewer">
                <?php print render($content['field_pdf_presentation']);?>
            </div>
            <div class="name-pdf">
                <a href="<?php print $content['field_pdf_presentation'][0]['#preview_path'] ?>" target="_blank">
                    <?php print $content['field_pdf_presentation']['#items'][0]['filename'] ?>
                    &nbsp;(<span class="presentation-extension"><?= $ext?> </span><?php print $bytes ?>)
                </a>
                <br>
                <span class="description"><?php print $content['field_pdf_description'][0]['#markup'] ?></span>
            </div>
            <p>
                <?php print $content['body'][0]['#markup'] ?>
            </p>
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
        <?php if ($blog_presentation_find === false): ?>  
        <h2>
            <?php if ($image != ''): ?>
            <span class="content-img-author"><img class="author-blog-presentation" src="<?= $image_url ?>"/></span>
            <?php else: ?>
            <span class="content-img-author"><img class="author-blog-presentation" src="/<?php print(drupal_get_path('module','ef_my_dashboard') . '/no_avatar.png'); ?>"/></span>
            <?php endif; ?>
            <span class="author-name-right"><?php print $author[1] . " " . $author[0]; ?></span>
        </h2>
        <div class="author-view">
            <?php print views_embed_view('authors_as_metadata','page_2', $content['field_ef_publ_contributors'][0]['#markup']); ?>
        </div>
        <?php endif; ?>
        <div class="related-links-block">
            <?php print ($content['field_ef_related_links_block'][0]['#markup']); ?>
        </div>
    </aside>
</body>
</html>






























