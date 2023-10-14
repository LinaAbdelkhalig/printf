#include "main.h"

/**
 * get_spec - handles the specifier
 * @format: the char we will check
 * @list: the list of arguments
 * @buff_i: the counter fof the characterse written
 * Return: buff_i;
 */

int get_spec(char format, va_list list, int buff_i)
{
	int len = 0;

	if (format == '\0')
		return (-1);
	else if (format == 'c')
	{
		_putchar(va_arg(list, int));
		buff_i++;
	}
	else if (format == '%')
	{
		_putchar(format);
		buff_i++;
	}
	else if (format == 's')
	{
		len = _puts(va_arg(list, char *));
		buff_i += len;
	}
	return (buff_i);
}
