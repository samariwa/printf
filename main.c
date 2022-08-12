#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int len1, len2;
	void *addr = (void *)0x7ffe637541f0;

	len1 = _printf("%d. Let's print a simple sentence, %s.\n%i. %c, This works\n", 1, "one", 2, 'G');
	len2 = printf("%d. Let's print a simple sentence, %s.\n%i. %c, This works\n", 2, "two", 2, 'G');
	_printf("%i %d %s %c \n", len1, len2, "imework", 'K');
	_printf("%i, %i\n", INT_MAX, INT_MIN);

	_printf("Let's print a simple sentence.\n");
	_printf("%b\n", 0);

	printf("Start\n%o\n%o\n", -53453, 53453);
	printf("new\n%s\n%s\n", itoa(-53453, 8), itoa(53453, 8));

	_printf("%o\n", 53453);

	printf("Hapa\n%u\n%u\n%u\n", -5, INT_MAX - 5, INT_MAX);

	_printf("%x\n%X\n", 53478, 53478);

	_printf("%u\n", 463);

	_printf("%i %d %s %c \n", len1, len2, "imework", NULL);

	_printf("Unsigned octal:[%o]\n", (unsigned int)INT_MAX + 1024);

	_printf("%b\n", 150);
	_printf("%b\n", -1024);

	_printf("%r", "\nThis sentence is retrieved from va_args!");
	_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");
	
	printf("%p\n", addr);
	_printf("%p\n", addr);

	return (0);
}
