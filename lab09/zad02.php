<div class = "input">
	<h3>Nowa osoba:</h3>
	<form>
		<input type="text" name="nowy">
		<?php
			error_reporting(0);
			if($_REQUEST['ile']!=NULL)
			{
				for($i=0;$i<=$_REQUEST['ile'];$i++)
				{
					if($i< $_REQUEST['ile'] )
					{
						$a=$_REQUEST['imie'.$i];
						echo '<input type="hidden" name="imie'.$i.'" value="'.$a.'" />'."\n";
					}
					else
					{
						echo '<input type="hidden" name="imie'.$i.'" value="'.$_REQUEST['nowy'].'" />'."\n";
					}
				}
			}
		?>
	<input type ="hidden" name="ile" value="<?php if($_REQUEST['ile']==NULL){ echo "0";}
		      if($_REQUEST['ile']!=NULL){ $a= $_REQUEST['ile']; echo $a+1;}?>">
	</form>
</div>

<div class = "list">
	<?php
		error_reporting(0);
		if ($_REQUEST['ile'] != NULL)
		{	
			for ($i = 0; $i <= $_REQUEST['ile']; $i++)
			{
				if($i< $_REQUEST['ile'] )
				{
					$a= $_REQUEST['imie'.$i] ;
					echo $i+1 .". ".$a."<br>";
				}
				else
				{
					echo $i+1 .". ".$_REQUEST['nowy']."<br>" ;
				}
			}
		}
	?>
</div>

