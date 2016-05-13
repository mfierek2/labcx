<?php
        error_reporting(0);
	$digit_one = $_POST['liczba1'];
	$digit_two = $_POST['liczba2'];
	$op = $_POST['znak'];
	$result = "";
	switch ($op)
	{
		case "+":
			$result = $digit_one + $digit_two;
			break;
		case "-":
			$result = $digit_one - $digit_two;
			break;
		case "*":
			$result = $digit_one * $digit_two;
			break;
		case "/":
			$result = $digit_one / $digit_two;
			break;
			}
	echo '<br/>'.'Wynik: '.$result;
?>
