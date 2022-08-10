#include "main.h"

/**
 * print_int - a function that prints input integer
 * @x: The number to be printed
 *
 * Return: nothing
 */
void print_int(int x)
{
	int i;

	/* case it's a negative */
	if (x < 0)
	{
		print_char('-');
		x *= -1;
	}
	i = 10;
	/* use intmax because we want to print even large numbers */
	/* x/i returns something for 10/10 or 10/11 but 0 for 10/9 */
	while (i < INT_MAX && x / i)
	{
		if (x / i)
		{
			print_char((x / i) + '0');
		}
		i = i * 10;
	}
	print_char((x % 10) + '0');
}
