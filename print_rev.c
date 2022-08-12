#include "main.h"

/**
 * print_rev - a function that reverses the  characters of a string
 * @str: The pointer of the string to be reversed
 *
 *Return: Length or error
 */
int print_rev(char *str)
{
	int i;

	for (i = _strlen(str); i >= 0; i--)
		write(1, &str[i], 1);

	return (i);
}
