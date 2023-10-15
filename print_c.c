#include "main.h"

/**
 * print_c - to print a char
 * @list: the list of arguments that will contain the char to be printed
 * Return: 1
 */

int print_c(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (1);
}
