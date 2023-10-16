#include "main.h"

/**
 * re_print - prints a reversed string
 * @r: the string to be reveresed
 * Return: a count of the printed chars
 */

int rev_print(char *r)
{
	int i, len = 0;

	if (!r)
		return (-1);
	for (len = 0; r[len] != '\0'; len++)
		;

	for (i = len - 1; i >= 0; i--)
		_putchar(r[i]);

	return (len);
}
