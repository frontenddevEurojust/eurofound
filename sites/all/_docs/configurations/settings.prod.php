<?php

$databases = array (
  'default' => 
  array (
    'default' => 
    array (
      'database' => 'ef-drupal',
      'username' => 'ef-drupal',
      'password' => 'ef-drupal-123p',
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
// php memory limit set by the OS (php.ini) to 740M
//ini_set('memory_limit', '-1'); // FRWBII-122 http://stackoverflow.com/q/561066/72478

$conf['404_fast_paths_exclude'] = '/\/(?:styles)\//';
$conf['404_fast_paths'] = '/\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i';
$conf['404_fast_html'] = '<html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>';
drupal_fast_404();


$conf['site_mail'] = 'eurofound@eurofound.europa.eu';
$conf['smtp_from'] = 'eurofound@eurofound.europa.eu';
$conf['smtp_fromname'] = 'Eurofound CMS';
//$conf['smtp_host'] = 'localhost';

$conf['update_notify_emails'] = array('mi@eworx.gr');

$conf['file_private_path']   = 'sites/default/files/private';
$conf['file_temporary_path'] = 'sites/default/temp';

$conf['error_level'] = 0;


$conf['css_gzip_compression'] = TRUE;
$conf['js_gzip_compression'] = TRUE;

