#ifndef PRINTF_H
#define PRINTF_H
#include <unistd.h>
void print_string(char *str);
void print_int(int x);
void print_float(float x);
void print_hexadecimal(int x);
char* itoa(int val, int base);
void print_char(char x);
#endif
