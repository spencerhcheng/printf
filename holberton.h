#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct willis - structure that takes in a type
 * @type: arguement type: char, string, decimal, integer
 * @f: function
 */
typedef struct willis
{
	char type;
	int (*f)();
} willis_t;
int _putchar(va_list args);
int convertArgs(char c, va_list args);
int _printf(const char *format, ...);
int print_string(va_list args);
int print_unsigned(unsigned int b);
int print_integer(va_list args);
int print_char(char c);
#endif
