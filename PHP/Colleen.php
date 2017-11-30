<?php
/*
	ONE COMMENT
*/
function foo()
{
	$str = "<?php%c/*%c%cONE COMMENT%c*/%cfunction foo()%c{%c%c%cstr = %c%s%c;%c%c%cout = sprintf(%cstr,10,10,9,10,10,10,10,9,36,34,%cstr,34,10,9,36,36,36,10,9,36,10,10,10,10,10,9,10,10,9,10,10,10,10);%c%cecho %cout;%c}%cfunction main()%c{%c/*%c%cSECOND COMMENT%c*/%c%cfoo();%c}%cmain();%c?>%c";
	$out = sprintf($str,10,10,9,10,10,10,10,9,36,34,$str,34,10,9,36,36,36,10,9,36,10,10,10,10,10,9,10,10,9,10,10,10,10);
	echo $out;
}
function main()
{
/*
	SECOND COMMENT
*/
	foo();
}
main();
?>
