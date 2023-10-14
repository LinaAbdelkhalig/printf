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
	int buff_i = 0, len;
	char buffer;
	char *str_buffer;

	if (!format)
		return (-1);

	va_start(list, format);

	while (*format)
	{
		if (*format == '\0')
			break;
		if (*format != '%')
		{
			_putchar(*format);
			buff_i++;

		}
		else
		{
			format++;

			if (*format == 'c')
			{
				buffer = va_arg(list, int);
				write(1, &buffer, 1);
				buff_i++;
			}
			if (*format == '%')
			{
				_putchar('%');
				buff_i++;
			}
			
			if (*format == 's')
			{
				str_buffer = va_arg(list, char *);
				len = _strlen(str_buffer);
				write(1, str_buffer,len);
				buff_i++;
			}
		}
		_putchar(buff_i);
		format++;
	}
	va_end(list);

	return (buff_i);
}
