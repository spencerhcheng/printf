#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/** 
 * print_char - prints a char
 * args: arguement of type char
 * Return: nothing
 */
void print_char(va_list args)
{
	_putchar(va_arg(args, char));
}

/** 
 * print_string - prints string
 * args: arguement of type char
 * Return: nothing
 */
void print_string(va_list args)
{
	int i;
	char *string;
	string = va_arg(args, char *);
	
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
}

/** 
 * print_decimal - prints decimal values
 * args: arguement of type char
 * Return: nothing
 */
void print_decimal(va_list args)
{
	int i = va_arg(args, int);
	
	if ((i / 10) != 0)
	{
		print_decimal(i / 10);
	
		if (i > 0)
		{
		_putchar(i % 10 + '0');
		}
		else 
		{
		putchar(- i + 10 + '0');
		}
	}
	else if (( i / 10 == 0) && (i % 10 != 0) && (i > 0))
	{
		putchar(i % 10 + '0');
	}
	else if ((i  / 10 == 0) && (i % 10 != 0) && (i <= 0))
	{
		putchar('-');
		putchar(-i % 10 + '0');
	}	
}

/** 
 * print_integer - prints integer values
 * args: arguement of type char
 * Return: nothing
 */
void print_integer(va_list args)
{
	int i = va_arg(args, int);
	
	if ((i / 10) != 0)
	{
		print_decimal(i / 10);
	
		if (i > 0)
		{
		_putchar(i % 10 + '0');
		}
		else 
		{
		putchar(- i + 10 + '0');
		}
	}
	else if (( i / 10 == 0) && (i % 10 != 0) && (i > 0))
	{
		putchar(i % 10 + '0');
	}
	else if ((i  / 10 == 0) && (i % 10 != 0) && (i <= 0))
	{
		putchar('-');
		putchar(-i % 10 + '0');
	}
}

/** 
 * _printf - prints char, string, integer and float
 * @format: initial string with type specifier
 * Return: 0
 */

int _printf(const char *format, ...)
{
	prints prints_t[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_decimal},
	{"i", print_integer},
	{NULL, NULL}
	};

	int i, j;
	int charCount;
	va_list args;
	const char delim;
	
	delim = '%';
	va_start(args, format);
	
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		if (format[i] != delim)
		{
			_putchar(format[i]);
		}
		else if (format[i] == delim)
		{
			if (format[i + 1] == delim)
			{
				_putchar('%');
				continue;
			}

			i++;
			j = 0;

				while (prints_t[j].type != NULL)
				{
					if (format[i] == prints[j].type[0])
					{
						prints_t[j].f(args);
					}
					j++;
				}
			}
		}
		i++;
	}	
	va_end(args);
	return (0);
}
