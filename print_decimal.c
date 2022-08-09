#include "printf.h"
  
/**
 * print_int - a function that prints input integer
 * @int: The number to be printed
 *
 * Return: nothing
 */
void print_decimal(int x)
{
        char *str;
        int i;

        /*use itoa function to convert int to string that can be input in _putchar*/
        str = itoa(x, 10);/* here 10 means decimal*/
        for (i = 0; str[i] != '\0'; i++)
                write(1, &str[i], 1);
}
