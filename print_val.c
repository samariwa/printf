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

/**
 * print_int - a function that prints input integer
 * @int: The number to be printed
 *
 * Return: nothing
 */
void print_int(int x)
{
	char *str;
	int i;

	/*use itoa function to convert int to string that can be input in _putchar*/
	str = itoa(x, 10);/* here 10 means decimal*/
	for (i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1);
}

/**
 * print_float - a function that prints input float
 * @x: The number to be printed
 *
 * Return: nothing
 */
void print_float(float x)
{
        char *str;
        int i;

        /*use itoa function to convert int to string that can be input in _putchar*/
        str = itoa(x, 10);/* here 10 means floating point notation*/
        for (i = 0; str[i] != '\0'; i++)
                write(1, &str[i], 1);
}

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

/**
 * itoa - a function that converts an integer to a string
 * @val: the integer to be converted to a string
 * @base: the base to which the number is converted
 *
 * Return: the converted string
 */
char* itoa(int val, int base)
{
	static char buf[32] = {0};
	int i = 30;

	for(; val && i ; --i, val /= base)
		buf[i] = "0123456789abcdef"[val % base];

	return &buf[i+1];

}
