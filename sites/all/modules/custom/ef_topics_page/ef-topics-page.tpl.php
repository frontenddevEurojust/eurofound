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
        <?php if(isset($variables['related_topic1_name']) || isset($variables['related_topic2_name']) || isset($variables['related_topic3_name'])): ?>
        <ul class="related-content-topic">
        <?php if(isset($variables['related_topic1_name'])): ?>        
            <?php if(isset($variables['related_topic1_image'])): ?>
            <li><?php print $related_topic1_image; ?>
            <?php else: ?>
            <li><img src="/<?php print(drupal_get_path('module','ef_topics_page') . '/images/img-no-available.jpg'); ?>">
            <?php endif; ?>
                <p><span class="item-topic">Topic: </span><a class="name-topic" href="/<?php print $url_1; ?>"><?php print $related_topic1_name; ?></a></p>   
            </li>
        <?php endif; ?>
        <?php if(isset($variables['related_topic2_name'])): ?>
            <?php if(isset($variables['related_topic2_image'])): ?>
            <li><?php print $related_topic2_image; ?>
            <?php else: ?>
            <li><img src="/<?php print(drupal_get_path('module','ef_topics_page') . '/images/img-no-available.jpg'); ?>">    
            <?php endif; ?>
                <p><span class="item-topic">Topic: </span><a class="name-topic" href="/<?php print $url_2; ?>"><?php print $related_topic2_name; ?></a></p>       
            </li>
        <?php endif; ?>
        <?php if(isset($variables['related_topic3_name'])): ?>
            <?php if(isset($variables['related_topic3_image'])): ?>
            <li><?php print $related_topic3_image; ?>
            <?php else: ?>
            <li><img src="/<?php print(drupal_get_path('module','ef_topics_page') . '/images/img-no-available.jpg'); ?>">
            <?php endif; ?>
                <p><span class="item-topic">Topic: </span><a class="name-topic" href="/<?php print $url_3; ?>"><?php print $related_topic3_name; ?></a></p>   
            </li>
        <?php endif; ?>
        </ul>
        <?php endif; ?>
        <div>
        <?php print $results_block; ?>
        </div>
    </section>
    <?php if(isset($variables['featured_block']) || isset($variables['related_links_block'])): ?>
    <aside class="large-3 columns">   
        <?php if(isset($variables['featured_block'])): ?>
        <div class="featured-block">
            <?php print $featured_block; ?>
        </div>
        <?php endif; ?>
        <?php if(isset($variables['related_links_block'])): ?>
        <div class="related-links-block">
            <?php print $related_links_block; ?>
        </div>
        <?php endif; ?>
    </aside>
    <?php endif; ?> 
</body>
</html>






























