<!--Google Analytics script-->
<script>

</script>


<!--PIWIK script-->

<script type="text/javascript">
    var _paq = _paq || [];
    (function(){ var u=(("https:" == document.location.protocol) ? "https://www.efstaging.bilbomatica.es/piwik/" : "http://www.efstaging.bilbomatica.es/piwik/");
    _paq.push(['setSiteId', 1]);
    _paq.push(['setTrackerUrl', u+'piwik.php']);
    _paq.push(['setLinkTrackingTimer', 750]);
    _paq.push(['trackPageView']);
    _paq.push(['enableLinkTracking']);
    var d=document, g=d.createElement('script'), s=d.getElementsByTagName('script')[0]; g.type='text/javascript'; g.defer=true; g.async=true; g.src=u+'piwik.js';
    s.parentNode.insertBefore(g,s); })();
</script>

<!--ClickDimensions script-->
<!-- #0003769: Questions on ClickDimensions tracking script

<script type="text/javascript">
   var cdJsHost = (("https:" == document.location.protocol) ? "https://" : "http://");
   document.write(unescape("%3Cscript src='" + cdJsHost + "analytics-eu.clickdimensions.com/ts.js' type='text/javascript'%3E%3C/script%3E"));
 </script>

<script type="text/javascript">
   var cdAnalytics = new clickdimensions.Analytics('analytics-eu.clickdimensions.com');
   cdAnalytics.setAccountKey('awRRlRSsgWkGOddXEXBvL9');
   cdAnalytics.setDomain('eurofound.europa.eu');
   cdAnalytics.trackPage();
 </script>

-->
<!--End ClickDimensions script-->

<noscript>
    <?php $siteUrl = ($_SERVER['HTTPS']) ? 'https://www.efstaging.bilbomatica.es/piwik/' : 'http://www.efstaging.bilbomatica.es/piwik/'; ?>
    <p><img src="<?php echo $siteUrl; ?>piwik.php?idsite=1&rec=1" style="border:0" alt="" /></p>
</noscript>
