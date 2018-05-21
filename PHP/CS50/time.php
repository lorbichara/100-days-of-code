<?php
	date_default_timezone_set('US/Eastern'); //PHP function that sets default time-zone
	$time = date('H:i:s', time()); //Capital H is for 24 hr time.
?>

<?php
	foreach ($_GET as $key => $value) {
		print("<p>{$key}: {$value}</p>");
	}
?>

<html>
	<head>
		<title>Current Time in Cambridge</title>
	</head>
	<body>
		The current time in Cambridge is <?= $time ?>.
	</body>

</html>