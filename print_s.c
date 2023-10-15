#include "main.h"

/**
 * _puts - prints out a string
 * @string: the string to be printed
 * Return: the length of the string printed
 */

int print_s(va_list list)
{
	char *string = va_arg(list, char*);
	int i;

	if (string)
	{
		for (i = 0; string[i] != '\0'; i++)
		{
			_putchar(string[i]);
		}
	}
	else
	{
		string = "(null)";
		for (i = 0; i < (_strlen(string)); i++)
			_putchar(string[i]);
	}

	return (i);
}
