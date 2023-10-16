#include "main.h"

/**
 * cont - the continuation for the printf function
 * @buff_i - the number of chars printed so far
 * @format: pointer to the format char address
 * @list: the list containing the arguments
 * Return: the new buff_i
 */

int cont(int buff_i, char format, va_list list)
{
	if (format == 'u')
		buff_i += print_ui(va_arg(list, unsigned int));
	else if (format == 'S')
		buff_i += print_exts(va_arg(list, char *));
	else if (format == 'p')
		buff_i += print_pt(va_arg(list, void *));
	else if (format == 'r')
		buff_i += rev_print(va_arg(list, char *));
	return (buff_i);
}

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
			else if (*format == 'o')
				buff_i += print_octal(va_arg(list, unsigned int));
			else if (*format == 'x')
				buff_i += print_hex(va_arg(list, unsigned int));
			else if (*format == 'X')
				buff_i += print_HEX(va_arg(list, unsigned int));
			else
				buff_i = cont(buff_i, *format, list);
		}
		format++;
	}
	va_end(list);
	return (buff_i);
}
