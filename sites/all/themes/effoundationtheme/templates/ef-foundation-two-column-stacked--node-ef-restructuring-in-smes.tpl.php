<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $display_submitted: whether submission information should be displayed.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>

<?php

 function getAssignToAuthor($content){

    if(isset($content['group_node_info']['field_ef_assign_to_author']['#items'][0]['target_id'])){

      //$node->content is the variable passed to drupal_render() after assembling. That's why we need
      $mid = $content['group_node_info']['field_ef_assign_to_author']['#items'][0]['target_id'];

      $sql = "SELECT DISTINCT u.name
              FROM users u
              INNER JOIN group_membership g ON u.uid = g.uid
              WHERE g.mid = '$mid'";

      $result = db_query($sql)->fetchAll();

  }

  return $result['0']->name;
 }
?>

<?php print print_insert_link();?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>



    <?php if(($content['group_node_info']['body']['#items'][0]['summary'])): ?>
      <ul class="small-12 large-6 metadata-list-group">
    <?php else: ?>
      <ul class="small-12 medium-12 metadata-list-group">
    <?php endif; ?>

    <?php if(isset($content['group_node_info']['field_ef_type_of_restructuring'])): ?>
        <li><span class="metadata-title"><?php print t('Type of restructuring') . ': '; ?></span><span class="metadata-item"><?php print render($content['group_node_info']['field_ef_type_of_restructuring']); ?></span></li>
    <?php endif; ?>

    <?php if(isset($content['group_node_info']['field_ef_employees_before_restr'])): ?>
        <li><span class="metadata-title"><?php print t('Employees before restructuring') . ': '; ?></span><span class="metadata-item"><?php print render($content['group_node_info']['field_ef_employees_before_restr']); ?></span></li>
    <?php endif; ?>

    <?php if(isset($content['group_node_info']['field_ef_employees_after_restr'])): ?>
        <li><span class="metadata-title"><?php print t('Employees after restructuring') . ': '; ?></span><span class="metadata-item"><?php print render($content['group_node_info']['field_ef_employees_after_restr']); ?></span></li>
    <?php endif; ?>

    <?php if(isset($content['group_node_info']['field_ef_nace'])): ?>
        <li><span class="metadata-title" content=<?php print($content['group_node_info']['field_ef_nace']); ?>><span class="metadata-item"><?php print t('Nace/Sector') . ': '; ?></span><?php print render($content['group_node_info']['field_ef_nace']); ?></span></li>
    <?php endif; ?>

    <?php if(isset($content['group_node_info']['field_ef_country'])): ?>
        <li><span class="metadata-title"><?php print t('Country') . ': '; ?></span><span class="metadata-item"><?php print render($content['group_node_info']['field_ef_country']); ?></span></li>
    <?php endif; ?>

    <?php if(isset($content['group_node_info']['field_ef_survey_date'])): ?>
        <li><span class="metadata-title"><?php print t('Date') . ': '; ?></span><span class="metadata-item"><?php print render($content['group_node_info']['field_ef_survey_date']); ?></span></li>
    <?php endif; ?>

    <?php if(isset($content['group_node_info']['field_ef_restructuring_keywords'])): ?>
        <li><span class="metadata-title"><?php print t('Keywords') . ': '; ?></span><span class="metadata-item"><?php print render($content['group_node_info']['field_ef_restructuring_keywords']); ?></span></li>
    <?php endif; ?>
    <!-- Hidden as it was not requested
    <?php if(isset($content['group_node_info']['field_ef_assign_to_country_group'])): ?>
        <li><span class='metadata-title'><?php print render($content['group_node_info']['field_ef_assign_to_country_group']['#title']) . ':'; ?></span>
            <?php print render($content['group_node_info']['field_ef_assign_to_country_group'][0]['#markup']);?>
        </li>
    <?php endif; ?>

    <?php if(isset($content['group_node_info']['field_ef_assign_to_author'])): ?>
        <li><span class='metadata-title'><?php print t('Assigned to Author:'); ?></span>
            <?php print render(getAssignToAuthor($content)); ?>
        </li>
    <?php endif; ?>

    <?php if(isset($content['group_node_info']['field_ef_author_contract'])): ?>
        <li><span class='metadata-title'><?php print render($content['group_node_info']['field_ef_author_contract']['#title']) . ':'; ?></span>
            <?php print render($content['group_node_info']['field_ef_author_contract'][0]['#markup']); ?>
        </li>
    <?php endif; ?>
    -->
  </ul>

  <?php if(isset($content['group_node_info']['body']['#items'][0]['summary'])
    && $content['group_node_info']['body']['#items'][0]['summary'] != 'NULL'): ?>
    <div class="small-12 large-5 summary">
      <h2><?php print t('Summary'); ?></h2>
      <p>
        <?php print render($content['group_node_info']['body']['#items'][0]['summary']); ?>
      </p>
    </div>
  <?php endif; ?>

  <?php if(isset($content['group_node_info']['body'])): ?>
    <div class="summary_body clear">
      <?php print render($content['group_node_info']['body']); ?>
    </div>
  <?php endif; ?>


</article>

