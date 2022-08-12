#include "main.h"

/**
 * print_octal - a function that prints octal of input
 * @x: The number to be printed as hexadecimal
 *
 * Return: the number of the chars printed
 */
int print_octal(unsigned int x)
{
	char *str;
	int i;

	/*
	 *use itoa function to convert int to string that can be
	 * input in _putchar
	 */
	str = unsigned_itoa(x, 8);/* here 8 means octal notation*/
	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
	}

	return (i);
}
