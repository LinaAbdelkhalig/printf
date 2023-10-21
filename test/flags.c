#include "main.h"
#include <string.h>

/**
 * plus_flag - force a sign before the integer
 * @num: the number to be checked
 * Return: 1 if positive, elsewise 0
 */

int plus_flag(int num)
{
	if (num < 0)
		return (0);
	_putchar('+');
	return (1);
}

/**
 * space_flag - insert a blank space before the value if no sign
 * @num: the number to be checked
 * Return: 1 if a space was inserted, elsewise 0
 */

int space_flag(int num)
{
	if (num < 0)
		return (0);
	_putchar(' ');
	return (1);
}

/**
 * hash_flag - change the first character in o to 0
 * @spec: the specifier
 * @num: the number to be checked
 * Return: number of prints if any, elsewise 0
 */

int hash_flag(char spec, int num)
{
	int count = 0;

	if (num == 0)
		return (0);
	count += _putchar('0');
	if (spec == 'x' || spec == 'X')
		count += _putchar(spec);
	return (count);
}

/**
 * handle_flag - handles what to do if flags are found
 * @format: pointer to the format
 * @p_flag: plus flag
 * @s_flag: space flag
 * @h_flag: hash flag
 * @list: the arguments list
 * Return: the number of prints
 */

int handle_flag(char format, int p_flag, int s_flag, int h_flag, va_list list)
{
	int num, count = 0;
	unsigned int ui;

	if (format == 'i' || format == 'd')
	{
		num = va_arg(list, int);
		if (p_flag)
			count += plus_flag(num);
		if (s_flag && !p_flag)
			count += space_flag(num);
		count += print_int(num);
	}
	else
	{
		ui = va_arg(list, unsigned int);
		if (h_flag)
			count += hash_flag(format, ui);
		if (format == 'x')
			count += print_hex(ui);
		else if (format == 'X')
			count += print_HEX(ui);
		else if (format == 'o')
			count += print_octal(ui);
	}
	return (count);
}

/**
 * check_flag - checks if there are any flags and handle them
 * @format: pointer to the format
 * @list: the arguments list
 * Return: the number of prints
 */

int check_flag(char *format, va_list list)
{
	char *ptr = format;
	char flags[] = {'+', ' ', '#', '-', '0'};
	char spec[] = {'d', 'i', 'o', 'x', 'X'};
	int count = 0, p_flag = 0, s_flag = 0, h_flag = 0;

	while (_strchr(*format, flags))
	{
		if (*format == '+')
		{
			p_flag++;
		}
		else if (*format == ' ')
			s_flag++;
		else if (*format == '#')
			h_flag++;
		else if (_strchr(*format, spec))
			break;
		format++;
	}
	if (!_strchr(*format, spec))
	{
		count += _putchar('%');
		format++;
		while (ptr != format)
		{
			count += _putchar(*ptr);
			ptr++;
		}
	}
	else
	{
		count += handle_flag(*format, p_flag, s_flag, h_flag, list);
	}
	return (count);
}
