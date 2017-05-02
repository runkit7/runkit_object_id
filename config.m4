dnl $Id$
dnl config.m4 for extension runkit_object_id

PHP_ARG_ENABLE(runkit_object_id, whether to enable runkit_object_id support,
[  --enable-runkit_object_id           Enable runkit_object_id support], no, yes)

if test "$PHP_RUNKIT" != "no"; then
  PHP_NEW_EXTENSION(runkit_object_id, runkit_object_id.c  \
, $ext_shared,, -Wdeclaration-after-statement -Werror -Wall -Wno-deprecated-declarations -Wno-pedantic)
fi
