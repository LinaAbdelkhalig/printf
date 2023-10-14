#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#define BUFF_SIZE 1024

/**
 * struct fs - struct fs
 * @c: the format
 * @f: the function associtated
 */
typedef struct fs
{
	char c;
	int (*f)(va_list list);
} fs_t;

int _strlen(char *string);
int _putchar(char c);
int _puts(char *string);

int get_spec(char format, va_list list, int buff_i);

int _printf(const char *format, ...);

#endif
