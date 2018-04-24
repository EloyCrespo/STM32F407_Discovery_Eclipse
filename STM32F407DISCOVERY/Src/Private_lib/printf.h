//https://www.menie.org/georges/embedded/#printf
/*
  Copyright 2001 Georges Menie
  https://www.menie.org/georges/embedded/small_printf_source_code.html

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

/*
	putchar is the only external dependency for this file,
	if you have a working putchar, just remove the following
	define. If the function should be called something else,
	replace outbyte(c) by your own function call.
*/
//#define putchar(c) outbyte(c)
#include <stdio.h>
//static void printchar(char **str, int c);

#define PAD_RIGHT 1
#define PAD_ZERO 2

//static int prints(char **out, const char *string, int width, int pad);

/* the following should be enough for 32 bit int */
#define PRINT_BUF_LEN 12

//static int printi(char **out, int i, int b, int sg, int width, int pad, int letbase);

//static int print(char **out, int *varg);

/* assuming sizeof(void *) == sizeof(int) */

int printf(const char *format, ...);

int sprintf(char *out, const char *format, ...);

