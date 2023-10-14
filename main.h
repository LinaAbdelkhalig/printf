#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#define BUFF_SIZE 1024

int _printf(const char *format, ...);
char *add_c(char *buff, char c);
int _strlen(char *string);

#endif
