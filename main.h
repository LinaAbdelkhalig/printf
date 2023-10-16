#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - the format specifier and its function
 * @fs: the format specifier
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
int _puts(char *string);
int print_int(int);
int print_binary(unsigned int);
int print_octal(unsigned int);
int print_hex(unsigned int);
int print_HEX(unsigned int);

int get_spec(char format, va_list list, int buff_i);
int _printf(const char *format, ...);

#endif
