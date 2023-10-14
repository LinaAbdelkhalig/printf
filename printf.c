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
	int i = 0;

	va_start(list, format);

	if(format)
	{
		while (*format)
		{
			switch (*format)
			{
				case '\':
					break;
				case '%':
					{
						format++;
						switch (*format)
						{
							case 'c':
								goto default2;
						}

					}
					break;
				default:
					{
						buff[i] = *format;
						i++;
					}
			}

			if (i == BUFF_SIZE)
			{
				write(1, buff, i);
			}
			format++;
		}
	}
}
