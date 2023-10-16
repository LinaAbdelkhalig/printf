#include "main.h"

/**
 * print_ui - prints unsigned numbers
 * @num: the unsigned integer number to be printed
 * Return: the number of of printed numbers
 */

int print_ui(unsigned int num)
{
	unsigned int x, i = 0;

	x = num;
	if (x / 10 != 0)
	{
		i += print_int(x / 10);
	}
	i += _putchar((x % 10) + '0');

	return (i);
}
