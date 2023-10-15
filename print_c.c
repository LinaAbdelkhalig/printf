#include "main.h"

/** print_c - to print a char
*/

int print_c(va_list list)
{
    char c = va_arg(list, int);
    _putchar(c);
    return (1);
}
