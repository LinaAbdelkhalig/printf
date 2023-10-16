#include "main.h"

/**
 * print_extHEX - converts an unsigned int to hexadecimal
 *              with capital letters, and prints it
 * @np: the unsigned int to be converted
 * Return: the number of printed numbers
 */

int print_extHEX(unsigned int np)
{
	int count = 0, mod, i;
	char *hex;

	if (np < 10)
		return (print_int(np));
	hex = malloc(sizeof(char) * 9);
	if (!hex)
		return (-1);
	hex[8] = '\0';
	for (i = 7; i >= 0; i--)
	{
		mod = np % 16;
		if (mod < 10)
			hex[i] = mod + '0';
		else
			hex[i] = mod - 10 + 'A';
		np /= 16;
	}
	for (i = 0; i < 8; i++)
	{
		if (hex[i] != '0')
		{
			count += write(1, &hex[i], 8 - i);
			break;
		}
	}
	free(hex);
	return (count);
}

