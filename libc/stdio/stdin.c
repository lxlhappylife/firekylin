/*
 *	libc/stdio/stdin.c
 *
 *	Copyright (C) 2016 ximo<ximoos@foxmail.com>
 */

#include "stdio_loc.h"

FILE * stdin=&__iotab[0];
