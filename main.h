#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
/**
 * struct fs - struct fs
 * @c: the format
 * @f: the function associtated
 */
typedef struct format
{
	char *fs;
	int (*f)();
} formsp;

int _strlen(char *string);
int _putchar(char c);
int print_c(va_list list);
int print_s(va_list list);
int print_p(void);
int print_i(va_list list);

int _printf(const char *format, ...);

#endif
