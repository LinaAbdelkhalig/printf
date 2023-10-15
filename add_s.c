#include "main.h"

/**
 * add_s - add a string the buffer
 * @buff: pointer to the buffer
 * @list: the list of arguments
 * Return: the length of the string after the new string is appended
 */

int add_s(char *buff, va_list list)
{
	int bufflen = _strlen(buff), i;
	char *string = va_arg(list, char *);

	for (i = 0; string[i] != '\0'; i++)
		buff[bufflen + i] = string[i];

	return (i);
}
