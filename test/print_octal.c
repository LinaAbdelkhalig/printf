#include "main.h"

/**
 * print_octal - converts an unsigned int to octal and prints it
 * @num: the unsigned integer number to be converted
 * Return: the number of printed numbers
 */

int print_octal(unsigned int num)
{
	int count = 0, i;
	char *oct;

	if (num < 8)
		count += print_int(num);
	oct = malloc(sizeof(char) * 12);
	if (!oct)
		return (-1);
	oct[11] = '\0';
	for (i = 10; i >= 0; i--)
	{
		oct[i] = (num % 8) + '0';
		num /= 8;
	}

	for (i = 0; i < 11; i++)
	{
		if (oct[i] != '0')
		{
			count += write(1, &oct[i], 11 - i);
			break;
		}
	}
	free(oct);
	return (count);
}
