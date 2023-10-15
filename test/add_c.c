#include "main.h"

/**
 * add_c - add a char to the buffer
 * @buff: pointer to the buffer
 * @c: the character to be appended
 * Return: pointer to the buffer with the char appended
 */

int add_c(char *buff, va_list c)
{
	int bufflen = _strlen(buff);

	buff[bufflen] = va_arg(c, int);

	return (1);
}
