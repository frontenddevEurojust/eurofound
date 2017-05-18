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

//$file = file_load($content['field_ef_document'][0]['#file']->fid);
$imageurl = image_style_url('large', _pdfpreview_create_preview($content['field_ef_document'][0]['#file']));

?>

<?php print print_insert_link();?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>

	<div class="row">
		
		<div class="ds-node-side-info large-4 columns">
			
			<div class="field field-name-publication-preview">
				<a href="<?= file_create_url($content['field_ef_document'][0]['#file']->uri); ?>"><img src="<?= $imageurl; ?>"></a> 
			</div>
			
			<div class="field field-name-field-ef-document">
				
			
				<span class="file">
					<a href="<?= file_create_url($content['field_ef_document'][0]['#file']->uri); ?>"><?= $content['field_ef_document'][0]['#file']->filename; ?></a>
				</span>
				
			</div>
			
			<?php if(isset($content['group_ef_node_details']['field_show_order_button'])): ?>
			<div class="field-order-label">
				<?= $content['field_order_label'][0]['#markup']; ?>
			</div>
			<?php endif; ?>
		

		</div>

		<div class="ds-node-content large-8 columns">
			
			<div class="field field-name-body">
				<?= $content['body'][0]['#markup']; ?>
			</div>

			<div id="node_ef_publication_full_group_ef_node_details">
				
				<ul class="metadata-publications">
					<?php if(isset($content['group_ef_node_details']['field_ef_publ_contributors'])): ?>
					<li>
						<span class="label-inline">Authors: </span><span><?= $content['group_ef_node_details']['field_ef_publ_contributors'][0]['#markup']; ?></span>
					</li>
					<?php endif; ?>
					
					<?php if(isset($content['group_ef_node_details']['field_ef_number_of_pages'])): ?>
					<li>
						<span class="label-inline">Number of pages: </span><span><?= $content['group_ef_node_details']['field_ef_number_of_pages'][0]['#markup']; ?></span>
					</li>
					<?php endif; ?>
					
					<?php if(isset($content['group_ef_node_details']['field_ef_document_type'])): ?>
					<li>
						<span class="label-inline">Document type: </span><span><a href="<?= $content['group_ef_node_details']['field_ef_document_type'][0]['#href'] ?>"><?= $content['group_ef_node_details']['field_ef_document_type'][0]['#title']; ?></a></span>
					</li>
					<?php endif; ?>
					
					<?php if(isset($content['group_ef_node_details']['field_ef_reference_no'])): ?>
					<li>
						<span class="label-inline">Reference nº: </span><span><?= $content['group_ef_node_details']['field_ef_reference_no'][0]['#markup']; ?></span>
						
					</li>
					<?php endif; ?>

					<?php if(isset($content['group_ef_node_details']['field_ef_isbn'])): ?>
					<li>
						<span class="label-inline">ISBN: </span><span><?= $content['group_ef_node_details']['field_ef_isbn'][0]['#markup']; ?></span>
						
					</li>
					<?php endif; ?>

					<?php if(isset($content['group_ef_node_details']['field_ef_catalogue'])): ?>
					<li>
						<span class="label-inline">Catalogue: </span><span><?= $content['group_ef_node_details']['field_ef_catalogue'][0]['#markup']; ?></span>
						
					</li>
					<?php endif; ?>

					<?php if(isset($content['group_ef_node_details']['field_ef_isbn'])): ?>
					<li>
						<span class="label-inline">DOI: </span><span><?= $content['group_ef_node_details']['field_ef_isbn'][0]['#markup']; ?></span>
						
					</li>
					<?php endif; ?>
					
					<?php if(isset($content['group_ef_node_details']['published_on'])): ?>
					<li>
						<span class="label-inline">Published on: </span><span><?= $content['group_ef_node_details']['published_on'][0]['#markup']; ?></span>
						
					</li>
					<?php endif; ?>

					<?php if(isset($content['group_ef_node_details']['field_ef_observatory'])): ?>
					<li>
						<span class="label-inline">Observatory: </span><span><a href="<?= $content['group_ef_node_details']['field_ef_observatory'][0]['#href']; ?>"><?= $content['group_ef_node_details']['field_ef_observatory'][0]['#title']; ?></a></span>
					</li>
					<?php endif; ?>

					<?php if(isset($content['group_ef_node_details']['field_ef_publ_sector'])): ?>
					<li>
						<span class="label-inline">Sector: </span><span><a href="<?= $content['group_ef_node_details']['field_ef_publ_sector'][0]['#href']; ?>"><?= $content['group_ef_node_details']['field_ef_publ_sector'][0]['#title']; ?></a></span>
					</li>
					<?php endif; ?>

					<?php if(isset($content['group_ef_node_details']['field_ef_topic'])): ?>
					<li><span class="label-inline">Topics:</span>
						<ul class="topic-list">
							<?php foreach ($content['group_ef_node_details']['field_ef_topic']['#items'] as $key => $topic): ?>
							<li><a href="<?= $content['group_ef_node_details']['field_ef_topic'][$key]['#href']; ?>"><?= $content['group_ef_node_details']['field_ef_topic'][$key]['#title']; ?></a></li>
							<?php endforeach; ?>
						</ul>
					</li>
					<?php endif; ?>

				</ul>
			</div>
			
	
			<?php if(isset($content['group_ef_node_details']['field_term_subscription_url'])): ?>
			<div class="field field-name-field-term-subscription-url field-type-text field-label-hidden field-wrapper">
				
				<?= $content['group_ef_node_details']['field_term_subscription_url'][0]['#markup']; ?>

			</div>
			<?php endif; ?>
	
		</div>
		
	</div>

	<?php if(in_array('anonymous user', $user->roles) || in_array('administrator', $user->roles)): ?>
	<div class="ds-node-comments">
		<div class="ef-comment-toggler toggler">
		    <span class="show-text">Useful? Interesting? Tell us what you think.</span>
		    <span class="hide-text">Hide comments</span>
		</div>
	  	<div id="comments" class="title comment-wrapper">
			<?php

				$comment = new stdClass;
				$comment->nid = $node->nid;
				$form = drupal_get_form('comment_form', $comment);
				print render($form);

			?>
		</div>
	</div>
	<?php endif; ?>

    
</article>

