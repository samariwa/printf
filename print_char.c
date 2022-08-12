#include "main.h"

/**
 * print_char - a function that prints input number
 * @x: The character to be printed
 *
 * Return: Lenth or error
 */
int print_char(int x)
{
	char c = (char)x;

	write(1, &c, 1);
	return (1);
}
