#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int _strlen(char *string);
int _strchr(char, char *);
int _putchar(char c);
int _puts(char *);
int print_int(int);
int check_flag(char *, va_list);
int print_ui(unsigned int);
int print_binary(unsigned int);
int print_octal(unsigned int);
int print_hex(unsigned int);
int print_HEX(unsigned int);
int print_extHEX(unsigned int);
int print_exts(char *);
int print_pt(void *);
int print_pthex(unsigned long int);
int rev_print(char *);
int get_rotated(char *);

int _printf(char *format, ...);

#endif
