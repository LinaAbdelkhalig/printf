#include "main.h"

/**
 * print_hex - converts an unsigned int to hexadecimal
 *		with small letters, and prints it
 * @num: the unsigned integer number to be converted
 * Return: the number of printed numbers
 */

int print_hex(unsigned int num)
{
	int count = 0, mod, i;
	char hex[8];

	if (num < 10)
		return (print_int(num));

	hex[8] = '\0';
	for (i = 7; i >= 0; i--)
	{
		mod = num % 16;
		if (mod < 10)
			hex[i] = mod + '0';
		else
			hex[i] = mod - 10 + 'a';
		num /= 16;
	}

	for (i = 0; i < 8; i++)
	{
		if (hex[i] != '0')
		{
			count += write(1, &hex[i], 8 - i);
			break;
		}
	}

	return (count);
}
