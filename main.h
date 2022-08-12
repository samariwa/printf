#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
/*#include <stdio.h>*/
#include <stdarg.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
/* supporting functions */
int _strlen(char *s);
/* corrected */
int print_string(char *str);
int print_char(int x);
int _strcmp(char *s1, char *s2);
int print_int(int x);
int print_binary(int x);
int print_decimal(int x);
void print_float(float x);
int print_octal(int x);
int print_hexadecimal_small(int x);
int print_hexadecimal_caps(int x);
char* itoa(int val, int base);
int print_unsigned(int x);
/* main function */
int _printf(const char *format, ...);


#endif
