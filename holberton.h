#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * struct willis - structure that takes in a print type
 * @type: arguement type: char, string, decimal, integer,
 * reverse string, conversion to binary
 * @f: function
 */
typedef struct operations
{
	char type;
	int (*f)();
} operations_t;
int _putchar(va_list args);
int _printf(const char *format, ...);
int print_string(va_list args);
int reverse_string(va_list args);
void print_us(unsigned int b);
int print_integer(va_list args);
int print_char(char c);
int convert_binary(va_list args);
#endif
