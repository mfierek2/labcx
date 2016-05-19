	<?php
				if(!isset($_COOKIE['visits'])) {
					echo '<span style="font-size: 26px;">'.'Jesteœ odwiedzaj¹cym nr '.$counterVal .'</span>';
					setcookie('visits','diskfdsljfclksmi',time()+86400);
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
				}
				else
					echo "Dziœ ju¿ tu by³eœ"

	?>