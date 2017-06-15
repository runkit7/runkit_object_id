/*
  +----------------------------------------------------------------------+
  | PHP Version 5, 7                                                     |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2006 The PHP Group, (c) 2008-2015 Dmitry Zenovich |
  | "runkit7" patches (c) 2015-2017 Tyson Andre                          |
  | "runkit7/runkit_object_id" patches (c) 2015-2017 Tyson Andre         |
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
  | Modified for php7 by Tyson Andre <tysonandre775@hotmail.com>         |
  +----------------------------------------------------------------------+
*/
/* This file implements only the function runkit_object_id() from the runkit/runkit7 extension. */

/* $Id$ */

#include "php_runkit_object_id.h"
#include "SAPI.h"

ZEND_BEGIN_ARG_INFO_EX(arginfo_runkit_object_id, 0, 0, 1)
	ZEND_ARG_INFO(0, obj)
ZEND_END_ARG_INFO()

/* {{{ proto int runkit_object_id(object instance)
Fetch the Object Handle ID from an instance */
PHP_FUNCTION(runkit_object_id)
{
	zval *obj;

#ifdef ZEND_PARSE_PARAMETERS_START
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJECT(obj)
	ZEND_PARSE_PARAMETERS_END_EX(RETURN_NULL());
#else
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "o", &obj) == FAILURE) {
		RETURN_NULL();
	}
#endif

	RETURN_LONG(Z_OBJ_HANDLE_P(obj));
}
/* }}} */

zend_function_entry runkit_object_id_functions[] = {
	PHP_FE(runkit_object_id,										arginfo_runkit_object_id)
	PHP_FE_END
};

/* {{{ runkit_module_entry
 */
zend_module_entry runkit_object_id_module_entry = {
	STANDARD_MODULE_HEADER,
	"runkit_object_id",
	runkit_object_id_functions,
	NULL,
	NULL,
	NULL,
	NULL,
	PHP_MINFO(runkit_object_id),
	PHP_RUNKIT_OBJECT_ID_VERSION,
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_RUNKIT_OBJECT_ID
ZEND_GET_MODULE(runkit_object_id)
#endif


/* {{{ PHP_MINFO_FUNCTION
 */
PHP_MINFO_FUNCTION(runkit_object_id)
{
	php_info_print_table_start();
	php_info_print_table_header(2, "runkit_object_id support", "enabled");

}
/* }}} */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
