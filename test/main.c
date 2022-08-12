#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int len1, len2;
	len1 = _printf("%d. Let's print a simple sentence, %s.\n%i. %c, This works\n", 1, "one", 2, 'G');
	len2 = printf("%d. Let's print a simple sentence, %s.\n%i. %c, This works\n", 2, "two", 2, 'G');
	_printf("%i %d %s %c \n", len1, len2, "imework", 'K');
	_printf("%i, %i\n", INT_MAX, INT_MIN);

	_printf("Let's print a simple sentence.\n");
	_printf("There is %d bytes in %d KB\n",
		1024, 1);
	_printf("%%");
	return (0);
}
