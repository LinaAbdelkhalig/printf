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
			if (*format == '\0')
				break;
			else if (*format == 'c')
			{
				_putchar(va_arg(list, int));
				buff_i++;
			}
			else if (*format == '%')
			{
				_putchar(*format);
				buff_i++;
			}
			else if (*format == 's')
			{
				buff_i += _puts(va_arg(list, char *));
			}
			else if (*format == 'd' || *format == 'i')
			{
				buff_i += print_int(va_arg(list, int));
			}
		}
		format++;
	}
	va_end(list);
	return (buff_i);
}
