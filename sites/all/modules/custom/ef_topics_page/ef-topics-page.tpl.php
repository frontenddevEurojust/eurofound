<?php
/**
 * $variables contains all available data
 *
 *
 * @see template_preprocess_ef_topics_page()
 *
 */

if(!empty($variables['ef_activities'])){
    drupal_add_html_head($variables['ef_activities'], 'ef-activities-metatag');
}
?>
<!DOCTYPE html>
<html>
<body>

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

    <?php if (isset($variables['term']->field_term_title[$variables['language']][0]['value'])): ?>
        <?php if (isset($variables['featured_block']) || isset($variables['related_links_block'])): ?>
        <section class="large-9 columns">
        <?php else: ?>
        <section class="large-12 columns">
        <?php endif; ?>
            <?php if (isset($variables['summary']) || isset($variables['main_image'])): ?>
            <div class="topic-abstract">


                <?php if (count($variables['alternativeTerms'])): ?>
                    <ul class="alternative-terms-topic">
                        <li><?php  print t("Alternative terms") . ":" ?>
                            <ul>
                            <?php foreach ($variables['alternativeTerms'] as $alternative): ?>
                                <li><?= strip_tags($alternative); ?></li>
                            <?php endforeach; ?>
                            </ul>
                        </li>
                    </ul>
                <?php endif; ?>



                <p>
                    <?php if (isset($variables['main_image'])): ?>
                        <?= $main_image; ?>
                    <?php else: ?>
                        <?php if(isset($variables['summary'])): ?>
                        <img src="/<?= drupal_get_path('module','ef_topics_page') . '/images/img-no-available.jpg'; ?>">
                        <?php endif; ?>
                    <?php endif; ?>
                </p>
                <p>
                    <?php if(isset($variables['summary'])): ?>
                        <?= $summary; ?>
                    <?php endif; ?>
                </p>
            </div>
            <?php endif; ?>

            <?php if (isset($variables['subscription'])): ?>
            <p class="topic-subscription"><a href="<?= $subscription_url; ?>" title="go to subscriptions page"><i class="fa fa-envelope-o" aria-hidden="true"></i>
            <?= t("Subscribe now and receive updates on Eurofound's work in the area of @title", array("@title" => $term->name)); ?></a></p>
            <?php endif; ?>

            <!-- DESCRIPTION AREA -->
            <?php if(isset($variables['description'])): ?>
            <div class="topic-description">
                <?= $description; ?>
            </div>
            <?php endif; ?>
            <!-- END DESCRIPTION AREA -->


            <!-- ONGOING WORK AREA -->
            <?php if(isset($variables['descriptionongoing'])): ?>
                <h2 class="title-ongoing">
                    <?= $titleongoing; ?>
                </h2>

                <div class="description-ongoing">
                    <?= $descriptionongoing; ?>
                </div>
            <?php endif; ?>
            <!-- END ONGOING WORK AREA -->


            <?php if (count($variables['topics'])): ?>
            <ul class="related-content-topic">
                <?php foreach ($variables['topics'] as $topic): ?>
                    <?php if (isset($topic['related_topic_image'])): ?>
                    <li><a href="/<?= $topic['url']; ?>"><?= $topic['related_topic_image']; ?></a>
                    <?php else: ?>
                    <li><img src="/<?= drupal_get_path('module','ef_topics_page') . '/images/img-no-available.jpg'; ?>">
                    <?php endif; ?>
                        <p><span class="item-topic"><?php print t("Topic:") ?></span><a class="name-topic" href="/<?= $topic['url']; ?>"><?= $topic['related_topic_name']; ?></a></p>
                    </li>
                <?php endforeach; ?>
            <?php endif; ?>
            </ul>


            <!-- PRINT CONTENT TABS -->
           <?php if (isset($print_tabs)): ?>
            <div class="section-container tabs" data-section="tabs">

            <?php foreach ($tabs as $tab_name => $tab_data): ?>
                <?php if (isset($tab_data)): ?>
                    <?php if($tab_name == 'publications'): ?>
                    <section class="active" id="<?= $tab_name; ?>">
                    <?php else: ?>
                    <section id="<?= $tab_name; ?>">
                    <?php endif; ?>
                        <h3 class="title" data-section-title><a href="#"><?php print t($tab_name) . ' <span class="total-items">(' . $total[$tab_name] . ')</span>'; ?></a></h3>
                        <div class="content" data-section-content>
                            <ul class="latest-news-list">
                            <?php foreach ($tab_data as $node_data): ?>
                                <?php if ($variables['navigation_language'] != 'en'): ?>
                                <li><a href="<?php print '/' . $variables['navigation_language']; ?>/<?php print(drupal_get_path_alias('node/' . $node_data->node_id)); ?>"><?= $node_data->title; ?></a>
                                <?php else: ?>
                                <li><a href="/<?php print(drupal_get_path_alias('node/' . $node_data->node_id)); ?>"><?= $node_data->title; ?></a>
                                <?php endif; ?>
                                    <ul class="metadata-items">
                                        <li><?= t($node_data->ct_name); ?></li>
                                        <?php if($node_data->ct_name == 'Event'): ?>
                                            <li><?= $node_data->event_start_date; ?></li>
                                        <?php else: ?>
                                            <li><?= $node_data->published_at; ?></li>
                                        <?php endif; ?>
                                    </ul>
                                </li>
                            <?php endforeach; ?>
                            </ul>
                            <?php if( $pager[$tab_name] !== 0): ?>
                                <?= $pager[$tab_name]; ?>
                            <?php endif; ?>
                        </div>
                    </section>
                <?php endif; ?>
            <?php endforeach; ?>

            </div>
            <?php endif; ?>



    </section>
    <?php endif; ?>

    <?php if (isset($variables['featured_block']) || isset($variables['related_links_block'])): ?>
    <aside class="large-3 columns">

        <?php if (isset($variables['featured_block'])): ?>
        <div class="featured-block">
            <?= render(field_view_field('taxonomy_term', $term, 'field_ef_featured_block_content', array('label'=>'hidden'))); ?>
        </div>

        <?php endif; ?>

        <?php if (isset($variables['related_links_block'])): ?>
        <div class="related-links-block">
            <?= render(field_view_field('taxonomy_term', $term, 'field_ef_related_links_block', array('label'=>'hidden'))); ?>
        </div>
        <?php endif; ?>

    </aside>
    <?php endif; ?>

</body>
</html>






























