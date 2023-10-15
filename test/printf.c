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

	if (!format || !*format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);
	va_start(list, format);
	while (format && *format)
	{
		if (*format != '%')
			buff_i += _putchar(*format);
		else
		{
			format++;
			if (*format == '\0')
				break;
			else if (*format == 'c')
				buff_i += _putchar(va_arg(list, int));
			else if (*format == '%')
				buff_i += _putchar(*format);
			else if (*format == 's')
				buff_i += _puts(va_arg(list, char *));
			else if (*format == 'd' || *format == 'i')
				buff_i += print_int(va_arg(list, int));
			else if (*format == 'b')
				buff_i += print_binary(va_arg(list, unsigned int));
		}
		format++;
	}
	va_end(list);
	return (buff_i);
}
