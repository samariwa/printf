#include "main.h"

/**
 * print_binary - a function that prints binary of input
 * @x: The number to be printed as binary
 *
 * Return: nothing
 */
int print_binary(unsigned int x)
{
	char *str;
	int i;

	/**
	*use itoa function to convert int to binary that can be
	* input in _putchar
	*/
	str = unsigned_itoa(x, 2);/* here 2 means binary notation*/
	for (i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1);

	return (i);
}
