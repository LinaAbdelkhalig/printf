#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to the standard output
 * @c: the character to be written
 * Return: 1 if success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
