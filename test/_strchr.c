#include "main.h"

/**
 * _strchr - looks for a character in the string
 * @c: the character we are looking for
 * @s: the string to be searched
 * Return: 1 if found, 0 if not found
 */

int _strchr(char c, char *s)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}
