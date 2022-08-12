#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#include <limits.h>
/* supporting functions */
int _strlen(char *s);
/* corrected */
int print_string(char *str);
int print_char(char x);
int _strcmp(char *s1, char *s2);
int print_int(int x);
int print_binary(int x);
int print_decimal(int x);
void print_float(float x);
void print_hexadecimal(int x);
char* itoa(int val, int base);

/* main function */
int _printf(const char *format, ...);


#endif
