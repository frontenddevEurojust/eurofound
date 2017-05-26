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
    <span class="last-updated"><?= $last_updated; ?></span>
    <?php if($show_menu): ?>
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
    <!--large-12 -->
    <?php if(isset($variables['featured_block']) || isset($variables['related_links_block'])): ?>
    <section class="large-9 columns">
    <?php else: ?>
    <section class="large-12 columns">
    <?php endif; ?>      
        
        <div class="topic-abstract">
        <p>
            <?php if(isset($variables['main_image'])): ?>
                <?= $main_image; ?>  
            <?php else: ?>
                <img src="/<?= drupal_get_path('module','ef_topics_page') . '/images/img-no-available.jpg'; ?>"  
            <?php endif; ?>
            <?php if(isset($variables['summary'])): ?>
                <?= $summary; ?>
            <?php endif; ?>
        </p>
        </div>
        
        <?php if(isset($variables['subscription'])): ?>
        <p class="topic-subscription"><a href="<?= $subscription_url; ?>" title="go to subscriptions page"><i class="fa fa-envelope-o" aria-hidden="true"></i>
        Subscribe now and receive updates on Eurofound's work in the area of <?= $contextual_term; ?></a></p>
        <?php endif; ?>
        <?php if(isset($variables['description'])): ?>  
        <div class="topic-description">
            <?= $description; ?>
        </div>
        <?php endif; ?>
        <?php if(count($variables['topics']) > 0): ?>
        <ul class="related-content-topic">
            <?php foreach ($variables['topics'] as $topic): ?>     
                <?php if(isset($topic['related_topic_image'])): ?>
                <li><a href="/<?= $topic['url']; ?>"><?= $topic['related_topic_image']; ?></a>
                <?php else: ?>
                <li><img src="/<?= drupal_get_path('module','ef_topics_page') . '/images/img-no-available.jpg'; ?>">
                <?php endif; ?>
                    <p><span class="item-topic">Topic: </span><a class="name-topic" href="/<?= $topic['url']; ?>"><?= $topic['related_topic_name']; ?></a></p>   
                </li>
            <?php endforeach; ?>
        <?php endif; ?>
        </ul>
        
        
        <!-- PRINT CONTENT TABS -->
       
        <div class="section-container tabs" data-section="tabs">
        <?php foreach ($tabs as $tab_name => $tab_data): ?>
            <?php if(isset($tab_data)): ?>
                <?php if($tab_name == 'publications'): ?>
                <section class="active" id="<?= $tab_name; ?>">
                <?php else: ?>
                <section id="<?= $tab_name; ?>">
                <?php endif; ?>
                    <h3 class="title" data-section-title><a href="#"><?= $tab_name . ' <span class="total-items">(' . $total[$tab_name] . ')</span>'; ?></a></h3>
                    <div class="content" data-section-content>
                        <ul class="latest-news-list">
                        <?php foreach ($tab_data as $node_data): ?>
                            <li class=""><a href="url-title"><?= $node_data->title; ?></a>
                                <ul class="metadata-items">
                                    <li><?= $node_data->ct_name; ?></li>
                                    <?php if($tab_name == 'Publications'): ?>
                                        <li><?= $node_data->publication_date; ?></li>
                                    <?php elseif($tab_name == 'Events'): ?>
                                        <li><?= $node_data->event_start_date; ?></li>
                                    <?php else: ?>
                                        <li><?= $node_data->published_at; ?></li>
                                    <?php endif; ?>
                                </ul>
                            </li>
                        <?php endforeach; ?>
                        </ul>
                        <!-- MOSTRAR PAGINADOR -->
                        <?php if( $pager[$tab_name] !== 0): ?>
                            <?= $pager[$tab_name]; ?>
                        <?php endif; ?>
                    </div>            
                </section>
            <?php endif; ?>  
        <?php endforeach; ?>
        </div>
        
        

  
    </section>
    <?php if(isset($variables['featured_block']) || isset($variables['related_links_block'])): ?>
    <aside class="large-3 columns">   
        <?php if(isset($variables['featured_block'])): ?>
        <div class="featured-block">
            <?= render(field_view_field('taxonomy_term', $term, 'field_ef_featured_block_content', array('label'=>'hidden'))); ?>
        </div>

        <?php endif; ?>
        <?php if(isset($variables['related_links_block'])): ?>
        <div class="related-links-block">
            <?= render(field_view_field('taxonomy_term', $term, 'field_ef_related_links_block', array('label'=>'hidden'))); ?>
        </div>
        <?php endif; ?>
    </aside>
    <?php endif; ?> 
</body>
</html>






























