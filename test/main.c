#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	printf("%d\n", _printf("%#x", 1024)+ printf("%#o", 1024));
	printf("%d\n", _printf("% ")); 
	printf("%d\n", _printf("% % % % "));
	printf("%d\n", _printf("%+i", -1024) + printf("%+d", -1024));
	printf("%d\n", _printf("%+i", INT_MAX)+printf("%+d", INT_MAX));
	printf("%d\n", _printf("There is %+d bytes in %+d KB\n", 1024, 1)+printf("There is %+d bytes in %+d KB\n", 1024, 1));
	printf("%d\n", _printf("%+i - %+i = %+i\n", 1024, 2048, -1024)+_printf("%+d - %+d = %+d\n", 1024, 2048, -1024));

	printf("%d\n", _printf("% d", -1024)+printf("% d", -1024));

	printf("%d\n", _printf("% +i + %+ i = % +d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX))+printf("%+i + %+i = %+d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX)));
	printf("%d\n", _printf("% +i + %+ i = % +d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX)));
	/*int n = 56;
	void *p;
	char *string = "test for the print_s func";

	p = &n;
	_printf("%!\n");
	_printf("lets see if this works %c\n", 65);
	_printf("thi is test sonogon %r\n", string);
	_printf("%R\n", "sono-gon");*/
	/*printf("%d\n", _printf("%+i + %+i = %+i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX)) + printf("%+i + %+i = %+i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX)));
	printf("%d\n", _printf("Can you print an address?\n%p\nNice!\n", (void *)-1)+printf("Can you print an address?\n%p\nNice!\n", (void *)-1));
	printf("%d\n", _printf("%p\n", (void *)0x7ffe637541f0)+printf("%p\n", (void *)0x7ffe637541f0));
	printf("%d\n", _printf("%o", 1024) + printf("%o", 1024));

	printf("%d\n", _printf("Complete the sentence: You %s nothing, jon snow.\n", (char *)0));
	_printf("%S\n", "Best\nschool");*/
    /*int len, len2, neg = -40, x = 0, y = 0;
    unsigned int ui;
    void *addr;    

    x = _printf("%b\n", 4294967295);
    printf("%d\n", x);
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    x +=_printf("Length:[%d, %i]\n", 0123, 0456);
    y += printf("Length:[%d, %i]\n", 0123, 0456);
    _printf("%d", x);
    printf("%d", x);
    _printf("%d", y);
    printf("%d", y);
    _printf("Negative:[%d]\n", neg);
    printf("Negative:[%d]\n", neg);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", 0, 8);
    printf("Unsigned hexadecimal:[%x, %X]\n", 0, 8);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");*/
    return (0);
}
