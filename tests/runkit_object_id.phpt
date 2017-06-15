--TEST--
runkit_object_id should fetch the object handle.
--SKIPIF--
<?php
if(!extension_loaded("runkit_object_id")) print "skip";
?>
--INI--
error_reporting=E_ALL
--FILE--
<?php
var_dump(runkit_object_id(array()));
var_dump(runkit_object_id(null));
var_dump(runkit_object_id(false));
var_dump(runkit_object_id(true));
var_dump(runkit_object_id(42));
var_dump(runkit_object_id(1.5));
var_dump(runkit_object_id('x'));
$x = new stdClass();
$y = new stdClass();
var_dump(runkit_object_id($x));
var_dump(runkit_object_id($y));
var_dump(runkit_object_id($x));

?>
--EXPECTF--
Warning: runkit_object_id() expects parameter 1 to be object, array given in %s on line %d
NULL

Warning: runkit_object_id() expects parameter 1 to be object, null given in %s on line %d
NULL

Warning: runkit_object_id() expects parameter 1 to be object, boolean given in %s on line %d
NULL

Warning: runkit_object_id() expects parameter 1 to be object, boolean given in %s on line %d
NULL

Warning: runkit_object_id() expects parameter 1 to be object, integer given in %s on line %d
NULL

Warning: runkit_object_id() expects parameter 1 to be object, %s given in %s on line %d
NULL

Warning: runkit_object_id() expects parameter 1 to be object, string given in %s on line %d
NULL
int(1)
int(2)
int(1)
