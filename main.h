#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include<stdint.h>
#include <stdbool.h>
#include <limits.h>
/* supporting functions */
int _strlen(char *s);
int print_string(char *str);
int print_char(int x);
int _strcmp(char *s1, char *s2);
int print_int(int x);
int print_pointer(unsigned int ptr);
int print_binary(unsigned int x);
int print_decimal(int x);
void print_float(float x);
int print_rev(char *str);
int print_octal(unsigned int x);
int print_hexadecimal_small(unsigned int x);
int print_hexadecimal_caps(unsigned int x);
char *unsigned_itoa(unsigned int val, int base);
char *itoa(int val, int base);
int print_unsigned(unsigned int x);

int check_null(const char *format);
/* main function */

int _printf(const char *format, ...);


#endif
