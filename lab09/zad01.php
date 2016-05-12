<?php
			error_reporting(0);
			$liczba1 = $_POST['liczba1'];
			$liczba2 = $_POST['liczba2'];
			$znak = $_POST['znak'];
			$wynik = "";
			switch ($znak)
			{
				case "+":
					$wynik = $liczba1+$liczba2;
					break;
				case "-":
					$wynik = $liczba1-$liczba2;
					break;
				case "*":
					$wynik = $liczba1*$liczba2;
					break;
				case "/":
					$wynik = $liczba1/$liczba2;
				break;
			}
		echo '<br/>'.'Wynik: '.$wynik;
		?>
