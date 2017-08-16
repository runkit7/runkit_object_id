dnl $Id$
dnl config.m4 for extension runkit_object_id

PHP_ARG_ENABLE(runkit_object_id, whether to enable runkit_object_id support,
[  --enable-runkit_object_id           Enable runkit_object_id support], no, yes)

PHP_ARG_ENABLE(runkit_spl_object_id, whether to enable spl_object_id in PHP <= 7.1,
[  --enable-runkit-spl_object_id    Enable spl_object_id support], inherit, no)


if test "$PHP_RUNKIT" != "no"; then
  if test "$ENABLE" != "no"; then
    PHP_RUNKIT_SPL_OBJECT_ID=yes
  fi
  if test "$PHP_RUNKIT_SPL_OBJECT_ID" != "no"; then
    AC_DEFINE(PHP_RUNKIT_SPL_OBJECT_ID, 1, [Whether to define spl_object_id in php <= 7.1])
  fi

  PHP_NEW_EXTENSION(runkit_object_id, runkit_object_id.c  \
, $ext_shared,, -Wdeclaration-after-statement -Werror -Wall -Wno-deprecated-declarations -Wno-pedantic)
fi
