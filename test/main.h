#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#define BUFF_SIZE 1024

typedef struct fs 
{
	char c;
	int (*f)(va_list list);
} fs_t;
int _printf(const char *format, ...);

int add_s(char *buff, va_list list);
int add_i(va_list list);

int _strlen(char *string);
int _putchar(char c);
int _puts(char *string);

#endif
