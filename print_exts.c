#include "main.h"

/**
 * print_exts - handles the S conversion spec
 * @string: the va_arg
 * Return: the length of the strinf printed
 */

int print_exts(char *string)
{
	int length = 0, i;

	if (!string)
		return (_puts("(null)"));
	while (*string)
	{
		if (*string < 32 || *string >= 127) /*if its a non-printable char*/
		{
			_putchar('\\');
			_putchar('x');

			length += 2; /*because we printed 2 chars*/
			i = *string;
			if (i < 16) /*if its representable by ascii*/
			{
				_putchar('0'); /*for the ascii rep*/
				length++;
			}
			length += print_extHEX(i);
		}
		else
		{
			_putchar(*string);
			length++;
		}
		string++;
	}
	return (length);
}
