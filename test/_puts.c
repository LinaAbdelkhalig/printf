#include "main.h"

/**
 * _puts - prints out a string
 * @string: the string to be printed
 * Return: the length of the string printed
 */

int _puts(char *string)
{
	while (string && *string)
	{
		_putchar(*string);
		string++;
	}
	return (_strlen(string));
}
