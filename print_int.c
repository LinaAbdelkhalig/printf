#include "main.h"

/**
 * print_int - prints an integer number
 * @n: the integer number to be printed
 * Return: the number of bytes printed
 */

int print_int(int n)
{
	unsigned int x, i = 0;

	if (n < 0)
	{
		i += _putchar('-');
		x = -n;
	}
	else
	{
		x = n;
	}
	if (x / 10 != 0)
	{
		print_int(x / 10);
	}
	i += _putchar((x % 10) + '0');

	return (i);
}
