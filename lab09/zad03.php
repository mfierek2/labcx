<?php
				session_start();
				$counter_name = "counter.txt";
				if (!file_exists($counter_name)) {
				  $f = fopen($counter_name, "w");
				  fwrite($f,"0");
				  fclose($f);
				}

				$f = fopen($counter_name,"r");
				$counter_val = fread($f, filesize($counter_name));
				fclose($f);

				if(!isset($_SESSION['has_visited'])){
				  $_SESSION['has_visited']="yes";
				  $counterVal++;
				  $f = fopen($counter_name, "w");
				  fwrite($f, $counter_val);
				  fclose($f);
				}
				echo '<span style="font-size: 26px;">'.'Jesteś odwiedzającym nr '.$counterVal .'</span>';
?>
