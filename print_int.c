#include "main.h"

/**
 * print_int - a function that prints input integer
 * @x: The number to be printed
 *
 * Return: number of chars printed or error
 */
int print_int(int x)
{
	int i, count, y;
	char *str;

	count = 0;
	y = 0;


	/* case it's a negative */
	if (x < 0)
	{
		print_char('-');
		count++;
		x *= -1;
	}

	if (x == INT_MIN)
	{
		y = 1;
		str = itoa(x - 1, 10);
		str[_strlen("2147483647") - 1] = '8';
	}
	else
	{
		str = itoa(x, 10);
	}
	count += print_string(str);

	return (count);
}
