#include "main.h"


/**
 * _print_string - print a given string as it is
 * @s: the string
 *
 * Return: the length of the string or -1 if there's an error
 * (maybe I'll make it do that later)
 */
int _print_string(char *s)
{
	/* assume we always have strings */
	int i = 0;

	while (i < _strlen(s))
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}
