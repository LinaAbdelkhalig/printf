#include "main.h"

/**
 * print_pt - prints an address stored inside a pointer
 * @pt: the  pointer to be printed
 * Return: the count of the chars printed
 */

int print_pt(void *pt)
{
	unsigned long int uli;
	int count = 0;

	if (!pt)
	{
		_puts("(null)");
		return (0);
	}

	uli = (unsigned long int)pt;
	_puts("0x");
	count += 2;
	count += print_pthex(uli);
	return (count);
}
