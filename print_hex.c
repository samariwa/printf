#include "main.h"

/**
 * print_hexadecimal_caps - a function that prints hexadecimal of input
 * @x: The number to be printed as hexadecimal in capital letters
 *
 * Return: the number of the chars printed
 */
int print_hexadecimal_caps(unsigned int x)
{
	char *str;
	int i, j;

	j = 'a' - 'A';
	/*
	 *use itoa function to convert int to string that can be
	 * input in _putchar
	 */
	str = unsigned_itoa(x, 16);/* here 16 means hexadecimal notation*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= j;
		}
		write(1, &str[i], 1);
	}

	return (i);
}

/**
 * print_hexadecimal_small - a function that prints hexadecimal of input
 * @x: The number to be printed as hexadecimal in small letters
 *
 * Return: the number of the chars printed
 */
int print_hexadecimal_small(unsigned int x)
{
	char *str;
	int i;

	/*
	*use itoa function to convert int to string that can be
	* input in _putchar
	*/
	str = unsigned_itoa(x, 16);/* here 16 means hexadecimal notation*/
	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
	}

	return (i);
}
