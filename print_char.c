#include "printf.h"

/**
 * print_char - a function that prints input number
 * @x: The character to be printed
 *
 * Return: nothing
 */
void print_char(char x)
{
	write(1, &x, 1);
}
