#include "main.h"

/**
 * print_unsigned - a function that prints unsigned integer
 * @x: The number to be printed
 *
 * Return: number of chars printed or error
 */
int print_unsigned(unsigned int x)
{
	int count = 0;
	char *str;

	str = unsigned_itoa(x, 10);
        
        count += print_string(str);

	return (count);
}
