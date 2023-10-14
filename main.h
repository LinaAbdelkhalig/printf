#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#define BUFF_SIZE 1024

typedef struct fs 
{
	char *c;
	int (*f)(char *buffer, va_list list);
} fs_t;
int _printf(const char *format, ...);

int add_c(char *buff, va_list list);
int add_s(char *buff, va_list list);
int add_i(char *buff, va_list list);

int _strlen(char *string);

#endif
