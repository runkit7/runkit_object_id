/*
  +----------------------------------------------------------------------+
  | PHP Version 7                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2006 The PHP Group, (c) 2008-2015 Dmitry Zenovich |
  | "runkit7" patches (c) 2015-2017 Tyson Andre                          |
  | "runkit7/runkit_object_id" repo (c) 2017 Tyson Andre                 |
  +----------------------------------------------------------------------+
  | This source file is subject to the new BSD license,                  |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.opensource.org/licenses/BSD-3-Clause                      |
  | If you did not receive a copy of the license and are unable to       |
  | obtain it through the world-wide-web, please send a note to          |
  | dzenovich@gmail.com so we can mail you a copy immediately.           |
  +----------------------------------------------------------------------+
  | Author: Sara Golemon <pollita@php.net>                               |
  | Modified by Dmitry Zenovich <dzenovich@gmail.com>                    |
  | Modified for php7 "runkit7" by Tyson Andre<tysonandre775@hotmail.com>|
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef PHP_RUNKIT_OBJECT_ID_H
#define PHP_RUNKIT_OBJECT_ID_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"

#include "php_ini.h"
#include "ext/standard/info.h"
#include "ext/standard/php_string.h"

#define PHP_RUNKIT_OBJECT_ID_VERSION "1.0.5"

#ifndef phpext_runkit_object_id_ptr
extern zend_module_entry runkit_object_id_module_entry;
#define phpext_runkit_object_id_ptr &runkit_object_id_module_entry
#endif

PHP_MINFO_FUNCTION(runkit_object_id);

PHP_FUNCTION(runkit_object_id);

#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
