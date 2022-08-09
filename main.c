#include "printf.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_string("Saul Goodman");
	print_int(23);
	print_char('c');
	print_hexadecimal(4863394);
	print_float(575);

	return (0);
}
