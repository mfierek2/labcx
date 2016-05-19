	<?php
		if(!isset($_COOKIE['visits'])) {
			error_reporting(0);
			$counter_name = "counter.txt";
			if (!file_exists($counter_name)) {
				$f = fopen($counter_name, "w");
				fwrite($f,"0");
				fclose($f);
			}
		$f = fopen($counter_name,"r");
		$counterVal = fread($f, filesize($counter_name));
		fclose($f);
		$counterVal++;
		$f = fopen($counter_name, "w");
		fwrite($f, $counterVal);
		fclose($f); 
				
		echo '<span style="font-size: 26px;">'.'Jesteś odwiedzającym nr '.$counterVal .'</span>';
		setcookie('visits','diskfdsljfclksmi',time()+86400);
		}
		else
			echo "Dziś już tu byłeś"
	?>
