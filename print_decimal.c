#include "main.h"

/**
 * print_decimal - a function that prints input integer
 * @x: The number to be printed
 *
 * Return: nothing
 */
void print_decimal(int x)
{
	char *str;
	int i;

	/*
	 * I don't know how this works so I can't make it work
	 * for negatives
	 */
	str = itoa(x, 10);/* here 10 means decimal*/
	for (i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1);
}
