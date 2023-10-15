#include "main.h"

int _printf(const char *format, ...)
{
    formsp arr[] =
    {
        {"%c", print_c},
        {"%s", print_s},
	{"%d", print_i},
	{"%i", print_i},
        {"%%", print_p}
    };
    va_list list;
    int i = 0, len = 0, j;
    va_start(list, format);
    if(!format || (format[0] == '%' && format[1] == '\0'))
       return (-1);

Here:
    while (format[i])
    {
	    j = 0;
	    while (j < 5)
	    {
		    if (arr[j].fs[0] == format[i] && arr[j].fs[1] == format[i+1])
		    {
			    len += arr[j].f(list);
			    i += 2;
			    goto Here;
		    }
		    j++;
	    }
	    _putchar(format[i]);
	    i++;
	    len++;
    }
    va_end(list);
    return (len);
}
