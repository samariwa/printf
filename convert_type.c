#include "main.h"

/**
 * itoa - a function that converts an integer to a string
 * @val: the integer to be converted to a string
 * @base: the base to which the number is converted
 *
 * Return: the converted string
 */
char *itoa(int val, int base)
{
	static char buf[32] = {0};
	int i = 30;

	for (; val && i ; --i, val /= base)
		buf[i] = "0123456789abcdef"[val % base];

	return (&buf[i + 1]);
}

/**
 * unsigned_itoa - a function that converts an unsigned integer to a string
 * @val: the integer to be converted to a string
 * @base: the base to which the number is converted
 *
 * Return: the converted string
 */
char *unsigned_itoa(unsigned int val, int base)
{
	static char buf[32] = {0};
	int i = 30;

	for (; val && i ; --i, val /= base)
		buf[i] = "0123456789abcdef"[val % base];

	return (&buf[i + 1]);
}
