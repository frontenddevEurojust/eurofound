<?php
/**
 * $variables contains all available data
 *
 * Variables:
 * - $links: An array of links to print per user.
 * - $role: Role of the current user.
 * - $observatory: Observatory of the current user.
 * - $user: User info. Provided by default. Limited info.
 * - $full_user: Full user info. Especifically loaded whole dataset.
 *
 * @see template_preprocess_ef_my_dashboard()
 *
 */
?>
<!DOCTYPE html>
<html>
<body>
<div class="row">
	<h1 class="text-right">My Dashboard</h1>
	<header class="my-dashboard-profile row">
	    <div class="my-dashboard-imgprofile  columns small-3 large-1">
	      <?php if(theme('user_picture',array('account' => $full_user))): ?>
	      	<?php print theme('user_picture', array('account' => $full_user)); ?>
	  	  <?php else: ?>
	  	  	<div class="user-picture">
	  	  		<a href="user/me/edit" title="View user profile."><img src="/<?php print(drupal_get_path('module','ef_my_dashboard') . '/no_avatar.png'); ?>" alt="no avatar" height="160" width="160"></a>
	  	  	</div>
	  	  <?php endif; ?>
	    </div>
	    <div class="my-dashboard-data columns small-9 large-10">
			  <ul class="columns small-12 large-6">
			      <li><span class="label">First Name:</span><span><?php print $full_user->field_ef_first_name['und'][0]['safe_value']; ?></span></li>
			      <li><span class="label">Last Name:</span><span><?php print $full_user->field_ef_last_name['und'][0]['safe_value'] ?></span></li>
			      <?php if(strlen($mail_aux) > 0): ?>
			      	<li><span class="label">Email:</span><span title="<?php print $user->mail; ?>"><?php print $mail_aux; ?></span></li>
			      <?php else: ?>
			      	<li><span class="label">Email:</span><span><?php print $user->mail; ?></span></li>
			      <?php endif; ?>
			      <li><span class="label">Role:</span><span><?php print $role; ?></span></li>
			      <li><span class="label">Observatory:</span><span><?php print $observatory; ?></span></li>
			  </ul>

			  <nav class="main-menu-dashboard columns small-12 large-5">
				  <ul class="inline-list">
				    <li><a href="find-content" title="Find Content" class="my-dashboard-find"><i class="fa fa-search" aria-hidden="true"></i> Find Content</a></li>
				    <li><a href="user" title="User profile" class="my-dashboard-profile"><i class="fa fa-user" aria-hidden="true"></i> My Profile</a></li>
				    <li><a href="contact-form/contact-us" title="Contact form" class="my-dashboard-contanct"><i class="fa fa-arroba"></i> Contact Us</a></li>
				    <li><a href="access/mantis" title="Mantis bug tracker" class="my-dashboard-mantis"><i class="fa fa-mantis"></i> Mantis</a></li>
				    <li><a href="user/logout" title="Log out" class="my-dashboard-logout"><i class="fa fa-power-off" aria-hidden="true"></i> Log out</a></li>
				  </ul>
			  </nav>
			</div>
	</header>
</div>

<div class="my-dashboard-container row large-12">
	<nav class="my-dashboard-todolist  columns small-12 large-3">
	  <ul>
	    <li><a href="ef-my-todo-list" title=""><i class="fa fa-file-text-o" aria-hidden="true"></i> <span>My to-do list</span></a></li>
	    <li><a href="ef-my-group-todo-list" title=""><i class="fa fa-file-text-o" aria-hidden="true"></i> <span>My group to-do list</span></a></li>
	  </ul>
	</nav>
  <section class="my-dashboard-shortcuts  columns small-12 large-9">
	  <div class="row">
	    <?php foreach ($links as $key => $value): ?>
	      <nav  class="<?php print strtolower($key); ?>-nav  columns small-12 medium-6 large-4">
	      <h2><i class="fa fa-cogs" aria-hidden="true"></i><?php print $key; ?></h2>
	      <ul>
	      <?php foreach ($value as $k => $v): ?>
	      	<li><a href=<?php print $k; ?>><i class="fa fa-arrow-circle-right" aria-hidden="true"></i> <?php print $v; ?></a></li>
	      <?php endforeach; ?>
	      </ul>
	      </nav>
	    <?php endforeach; ?>

	    <nav class="administration-nav  columns small-12  medium-6  large-4">
	       <h2><i class="fa fa-cogs" aria-hidden="true"></i> Administration Page</h2>
	      <ul>
	        <li><a href="admin/content/ef-qrr" title="" class=""><i class="fa fa-arrow-circle-right" aria-hidden="true"></i> Quality Rating</a></li>
	        <li><a href="admin/content/ef-qrr/comments" title="" class=""><i class="fa fa-arrow-circle-right" aria-hidden="true"></i> Comments and Documents</a></li>
	        <li><a href="admin/content/ef-qrr/status" title="" class=""><i class="fa fa-arrow-circle-right" aria-hidden="true"></i> Status Actions</a></li>
	      </ul>
	    </nav>
		</div>
		<div class="row">
		    <nav  class="add-content-nav  columns small-12  medium-6 large-8">
		      <h2><i class="fa fa-file-text-o" aria-hidden="true"></i> Add content</h2>
		      <?php
		      	$block = module_invoke('block', 'block_view', '28');
						print render($block['content']);
			  ?>
		    </nav>
		    <nav class="extranets-nav  columns small-12  medium-6  large-4">
		      <h2><i class="fa fa-external-link-square" aria-hidden="true"></i> Misc</h2>
		      <ul>
		        <li><a href="node/55566" title="" class=""><i class="fa fa-external-link" aria-hidden="true"></i> <span>Extranet for the Governing Board</span></a></li>
		        <li><a href="node/58826" title="" class=""><i class="fa fa-external-link" aria-hidden="true"></i> <span>Extranets for the Network of European Correspondents</span></a></li>
		        <li><a href="reimbursement-webforms" title="" class=""><i class="fa fa-external-link" aria-hidden="true"></i> <span>Reimbursement webforms</span></a></li>
		        <?php if($observatory == 'EMCC'): ?>
		        <li><a href="procurement-submissions" title="" class=""><i class="fa fa-external-link" aria-hidden="true"></i> <span>Procurement Form Submissions</span></a></li>
		      	<?php endif; ?>
		      </ul>
		  	</nav>
	  	</div>
  </section>
</div>

</body>
</html>
