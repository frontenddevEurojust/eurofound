<?php

// change the following:
$dev_username = 'mi';
$temp = 'C:\temp\drupal\ef-website';

$databases = array (
  'default' => 
  array (
    'default' => 
    array (
      'database' => 'ef-drupal',
      'username' => 'ef-drupal',
      'password' => 'ef-drupal-123',
      'host' => 'localhost',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
);


$update_free_access = FALSE;


$drupal_hash_salt = '3hsFAwfB2kGkiMnsdysDNBmEd771cmLAU-tFW4d2Y60';


ini_set('session.gc_probability', 1);
ini_set('session.gc_divisor', 100);
ini_set('session.gc_maxlifetime', 200000);
ini_set('session.cookie_lifetime', 2000000);
ini_set('memory_limit', '-1'); // FRWBII-122 http://stackoverflow.com/q/561066/72478

$conf['404_fast_paths_exclude'] = '/\/(?:styles)\//';
$conf['404_fast_paths'] = '/\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i';
$conf['404_fast_html'] = '<html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>';
drupal_fast_404();


$conf['site_mail'] = "$dev_username+drupal@eworxsa.com";
$conf['smtp_from'] = 'ef+drupal+sender@eworxsa.com';
$conf['smtp_fromname'] = 'drupal test mail sender';
$conf['smtp_host'] = 'elrond.eworx.sa';

$conf['update_notify_emails'] = array("$dev_username@eworxsa.com");

$conf['file_private_path']   = $temp;
$conf['file_temporary_path'] = $temp;

// definite drupal 7 book, p. 408
error_reporting(-1); 
$conf['error_level'] = 2; 
ini_set('display_errors', TRUE); 
ini_set('display_startup_errors', TRUE);