#include "main.h"

/**
 * print_decimal - a function that prints input integer
 * @x: The number to be printed
 *
 * Return: no of chars printed or error
 */
int print_decimal(int x)
{
	char *str;
	int i, count;

	count = 0;
	/* case it's a negative */
	if (x < 0)
	{
		print_char('-');
		count++;
		x *= -1;
	}

	str = itoa(x, 10);/* here 10 means decimal*/
	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
		count++;
	}
	return (count);
}
