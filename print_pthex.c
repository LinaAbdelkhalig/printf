#include "main.h"

/**
 * print_pthex - converts an unsigned long int to hexadecimal
 *		with small letters, and prints it
 * @num: the unsigned integer number to be converted
 * Return: the number of printed numbers
 */

int print_pthex(unsigned long int num)
{
	int count = 0, mod, i;
	char *hex;

	if (num < 10)
		return (print_int(num));
	hex = malloc(sizeof(unsigned long int) * 13);
	if (!hex)
		return (-1);
	hex[12] = '\0';
	for (i = 11; i >= 0; i--)
	{
		mod = num % 16;
		if (mod < 10)
			hex[i] = mod + '0';
		else
			hex[i] = mod - 10 + 'a';
		num /= 16;
	}

	for (i = 0; i < 12; i++)
	{
		if (hex[i] != '0')
		{
			count += write(1, &hex[i], 12 - i);
			break;
		}
	}
	free(hex);
	return (count);
}
