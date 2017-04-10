<?php
for ($i = 0; $i <= 19000; $i += 100) {
    echo '<br/>wget -O - -q "http://ef.1/sites/all/_docs/migration/factsheets.php?action=migrate&from='.$i.'&to=100">> migrate-ef-factsheets-'.$i.'-'.($i+100).'.txt'.
	'<br/>timeout 20';
}
?>