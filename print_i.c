#include "main.h"

int print_i(va_list list)
{
    int n = va_arg(list, int);
    int m, d = (n % 10), dg, e = 1, ind = 1;
    
    n = n / 10;
    m = n;
    
    if (d < 0)
    {
        _putchar('-');
        m = -m;
        n = -n;
        d = -d;
        ind++;
    }
    if (m > 0)
    {
        while ((m / 10) != 0)
        {
            e = e * 10;
            m = m / 10;
        }
        m = n;
        while (e > 0)
        {
            dg = m / e;
            _putchar(dg + '0');
            m = m - (dg * e);
            e = e / 10;
            ind++;
        }
    }
    _putchar(d + '0');
    return (ind);
}
