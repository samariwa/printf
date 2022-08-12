#include "main.h"

/**
 * print_unsigned - a function that prints unsigned integer
 * @x: The number to be printed
 *
 * Return: number of chars printed or error
 */
int print_unsigned(int x)
{
	int count = 0;

	/* case it's a negative */
	if (x < 0)
	{
		return (-1);
	}

	count += print_int(x);

	return (count);
}
