#include "main.h"

/**
 * print_char - a function that prints input number
 * @x: The character to be printed
 *
 * Return: Lenth or error
 */
int print_char(char x)
{
	write(1, &x, 1);
	return(1);
}
