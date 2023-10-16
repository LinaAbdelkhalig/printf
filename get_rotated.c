#include "main.h"

/**
 * get_rotated - will print the string rotated to 13 chars
 * @string: the string to be rotated
 * Return: the number of chars printed
 */

int get_rotated(char *string)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (!string)
		return (-1);

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (string[i] == alpha[j])
			{
				_putchar(rot[j]);
				break;
			}
		}
		if (j == 52)
		{
			_putchar(string[i]);
		}
	}

	return (i);
}
