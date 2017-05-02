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
dpm($variables);
?>
<!DOCTYPE html>
<html>
<body>
    <?php if($is_admin): ?>
    <ul class="button-group">
        <?php foreach ($variables['admin_menu'] as $item_name => $url): ?>
        <li><a href="<?php print $url; ?>"><?php print str_replace("_"," ",$item_name);?></a></li>
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
                <?php print $main_image; ?>  
            <?php else: ?>
                <img src="/<?php print(drupal_get_path('module','ef_topics_page') . '/images/img-no-available.jpg'); ?>"  
            <?php endif; ?>
            <?php if(isset($variables['summary'])): ?>
                <?php print $summary; ?>
            <?php endif; ?>
        </p>
        </div>
        
        <?php if(isset($variables['subscription'])): ?>
        <p class="topic-subscription"><a href="<?php print $subscription_url; ?>" title="go to subscriptions page"><i class="fa fa-envelope-o" aria-hidden="true"></i>
        Subscribe now and receive updates on Eurofound's work in the area of <?php print $contextual_term; ?></a></p>
        <?php endif; ?>
        <?php if(isset($variables['description'])): ?>  
        <div class="topic-description">
            <?php print $description; ?>
        </div>
        <?php endif; ?>
        <?php if(count($variables['topics']) > 0): ?>
        <ul class="related-content-topic">
            <?php foreach ($variables['topics'] as $topic): ?>     
                <?php if(isset($topic['related_topic_image'])): ?>
                <li><?php print $topic['related_topic_image']; ?>
                <?php else: ?>
                <li><img src="/<?php print(drupal_get_path('module','ef_topics_page') . '/images/img-no-available.jpg'); ?>">
                <?php endif; ?>
                    <p><span class="item-topic">Topic: </span><a class="name-topic" href="/<?php print $topic['url']; ?>"><?php print $topic['related_topic_name']; ?></a></p>   
                </li>
            <?php endforeach; ?>
        <?php endif; ?>
        </ul>
        
        
        <!-- PRINT CONTENT TABS -->
       
        <div class="section-container tabs" data-section="tabs">
        <?php foreach ($variables['tabs'] as $tab_name => $tab_data): ?>
            <?php if($tab_name == 'publications'): ?>
            <section class="active" id="<?php print $tab_name; ?>">
            <?php else: ?>
            <section id="<?php print $tab_name; ?>">
            <?php endif; ?>
                <h3 class="title" data-section-title><a href="#"><?php print $tab_name; ?></a></h3>
                <div class="content" data-section-content>
                    <?php foreach ($tab_data as $node_data): ?>
                        <ul class="latest-news-list">
                            <li class=""><a href="url-title"><?php print $node_data->title; ?></a>
                                <ul class="metadata-items">
                                    <li><?php print $node_data->ct_name; ?></li>
                                    <?php if($tab_name == 'Publications'): ?>
                                        <li><?php print $node_data->publication_date; ?></li>
                                    <?php elseif($tab_name == 'Events'): ?>
                                        <li><?php print $node_data->event_start_date; ?></li>
                                    <?php else: ?>
                                        <li><?php print $node_data->published_at; ?></li>
                                    <?php endif; ?>
                                </ul>
                            </li>
                        </ul>
                    <?php endforeach; ?>
                    <div class="pagination-centered">
                        <div class="item-list">
                            <ul class="pagination pager">
                                <li class="current first"><a href="">1</a></li>
                                <li><a title="Go to page 2" href="/topics_page/<?php print $tab_name; ?>/page=1">2</a></li>
                                <li><a title="Go to page 3" href="/topics_page/<?php print $tab_name; ?>/page=2">3</a></li>
                                <li><a title="Go to page 4" href="/topics_page/<?php print $tab_name; ?>/page=3">4</a></li>
                                <li class="arrow"><a title="Go to next page" href="/ef-my-todo-list?page=1">next ›</a></li>
                                <li class="arrow last"><a title="Go to last page" href="/ef-my-todo-list?page=3">last »</a></li>
                            </ul>
                        </div>
                    </div>
                </div>            
            </section>  
        <?php endforeach; ?>
        </div>
        
        

  
    </section>
    <?php if(isset($variables['featured_block']) || isset($variables['related_links_block'])): ?>
    <aside class="large-3 columns">   
        <?php if(isset($variables['featured_block'])): ?>
        <div class="featured-block">
            <?php print render(field_view_field('taxonomy_term', $term, 'field_ef_featured_block_content', array('label'=>'hidden'))); ?>
        </div>

        <?php endif; ?>
        <?php if(isset($variables['related_links_block'])): ?>
        <div class="related-links-block">
            <?php print render(field_view_field('taxonomy_term', $term, 'field_ef_related_links_block', array('label'=>'hidden'))); ?>
        </div>
        <?php endif; ?>
    </aside>
    <?php endif; ?> 
</body>
</html>






























