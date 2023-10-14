#include "main.h"
#include <stdio.h>

/**
 * _printf - produces output according to a format
 * @format: a char string
 * Return: the number of characters printed excecpt for the \0
 */

int _printf(const char *format, ...)
{
	va_list list;
	int buff_i = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(list, format);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			buff_i++;
		}
		else
		{
			format++;
			buff_i += get_spec(*format, list, buff_i);
		}
		format++;
	}
	va_end(list);

	return (buff_i);
}
