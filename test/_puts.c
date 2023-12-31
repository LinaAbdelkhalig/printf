#include "main.h"

/**
 * _puts - prints out a string
 * @string: the string to be printed
 * Return: the length of the string printed
 */

int _puts(char *string)
{
	int i;

	if (string)
	{
		for (i = 0; string[i] != '\0'; i++)
		{
			_putchar(string[i]);
		}
	}
	else
		return (_puts("(null)"));

	return (i);
}
