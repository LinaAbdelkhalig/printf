#include "main.h"

/**
 * _strlen - returns the length of a stirng
 * @string: the string in question
 * Return: the lenfth of the string
 */

int _strlen(char *string)
{
	int i = 0;

	while (*string)
		i++;

	return (i);
}
