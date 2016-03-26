/*
 *    command/mkdir.c
 *
 *    Copyright (C) 2016 ximo<ximoos@foxmail.com>
 */

#include <sys/unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc<2){
		printf("Usage:mkdir name ...");
	}
	return mkdir(argv[1],0777);
}
