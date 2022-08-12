#include "main.h"

/**
 * print_hexadecimal - a function that prints hexadecimal of input
 * @x: The number to be printed as hexadecimal
 * @c: The specifier of the case of the hexadecimal to be output
 *
 * Return: the number of the chars printed
 */
int print_hexadecimal(int x, char c)
{
	char *str;
	int i, j;

	j = 'a' - 'A';
	/*
	 *use itoa function to convert int to string that can be
	 * input in _putchar
	 */
	str = itoa(x, 16);/* here 16 means hexadecimal notation*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (c == 'X' && str[i] > 'a' && str[i] < 'z')
		{
			str[i] -= j;
			write(1, &str[i], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
	}

	return (i);
}
