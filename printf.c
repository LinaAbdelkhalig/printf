#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a char string
 * Return: the number of characters printed excecpt for the \0
 */

int _printf(const char *format, ...)
{
	char buff[BUFF_SIZE];
	va_list list;
	int i = 0, j = 0, buff_i = 0;

	fs_t formats[] = {
		{"c", add_c},
		{"s", add_s},
		{"%", add_c},
		/*{"d", add_int},
		{"i", add_int}*/
	};

	if (!format)
		return (-1);

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 3; j++)
			{
				if (format[i] == formats[j].c)
					buff_i += formats[j].f(buff, list); /*this should return the umber of chars inserted into the buffer right? */
			}
		}
		else
		{
			buff[buff_i] = format[i];
		}

		if (buff_i == BUFF_SIZE)
		{
			write(1, buff, buff_i);
			buff_i = 0;
		}
	}
	return (buff_i);
}
