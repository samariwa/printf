#include "printf.h"

/**
 * print_string - a function that prints every other character of a string
 * @str: The pointer of the string to be printed
 *
 *Return: nothing
 */
void print_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1);
}
