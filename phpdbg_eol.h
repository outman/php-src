/*
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 7-4 The PHP Group                                      |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Anatol Belski <ab@php.net>                                  |
   +----------------------------------------------------------------------+
*/

#ifndef PHPDBG_EOL_H
#define PHPDBG_EOL_H

#include "phpdbg.h"

struct phpdbg_eol_rep {
	char *name;
	char *rep;
	int8_t id;
};

enum {
	PHPDBG_EOL_CRLF, /* DOS */
	/*PHPDBG_EOL_LFCR,*/ /* for Risc OS? */
	PHPDBG_EOL_LF, /* UNIX */
	PHPDBG_EOL_CR /* MAC */
};

int8_t
phpdbg_eol_global_update(char *name TSRMLS_DC);

char *
phpdbg_eol_name(int8_t id);

char *
phpdbg_eol_rep(int8_t id);

void
phpdbg_eol_convert(char **str, int *len TSRMLS_DC);

#endif /* PHPDBG_EOL_H */

