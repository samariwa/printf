#include "printf.h"

/**
 * print_hexadecimal - a function that prints hexadecimal of input
 * @x: The number to be printed as hexadecimal
 *
 * Return: nothing
 */
void print_hexadecimal(int x)
{
	char *str;
	int i;

	/*use itoa function to convert int to string that can be input in _putchar*/
	str = itoa(x, 16);/* here 16 means hexadecimal notation*/
	for (i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1);
}
