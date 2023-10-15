#include "main.h"
#include <stdio.h>
/**
 * print_binary - coverts an unsigned int to binary and prints it
 * @num: the unsigned integer number to be converted
 * Return: the number of printed numbers
 */

int print_binary(unsigned int num)
{
	int count = 0, i;
	char *bin = malloc(sizeof(char) * 33);

	if (!bin)
		return (-1);
	bin[32] = '\0';
	for (i = 31; i > 0; i--)
	{
		bin[i] = (num % 2) + '0';
		num /= 2;
	}

	for (i = 0; i < 32; i++)
	{
		if (bin[i] == '1')
		{
			count += write(1, &bin[i], 32 - i);
			break;
		}
	}
	free(bin);
	return (count);
}
