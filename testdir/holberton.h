#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
int _putchar(char c);
/** 
 * struct prints - structure that takes in a type
 * @type: arguement type: char, string, decimal, integer
 * @f: function
 */
typedef struct prints
{
	char *type;
	void (*f)();
} prints;
void print_char(va_list args);
void print_string(va_list args);
void print_decimal(va_list args);
void print_integer(va_list args);
#endif
