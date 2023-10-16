#include "main.h"

/**
 * _strlen - returns the length of a stirng
 * @string: the string in question
 * Return: the lenfth of the string
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;

	return (i);
}
