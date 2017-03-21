#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * convertArgs - calls function when
 * format[i] matches struct case
 * @c: character arguement
 * @args: arguments
 * Return: function in struct
 */
int convertArgs(char c, va_list args)
{
	willis_t spencer[] = {
	{'c', _putchar},
	{'s', print_string},
	{'d', print_integer},
	{'i', print_integer},
	};

	int i;

	for (i = 0; i < 4; i++)
	{
		if (spencer[i].type == c)
		{
			return (spencer[i].f(args));
		}
	}
	return (0);
}

/**
 * _printf - prints out test cases
 * @format: initial string to print out
 * and look for type match
 * Return: characters
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int i, j;

	j = 0;
	va_start(valist, format);

	if (format == NULL)
	{
		return (0);
	}

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			j += convertArgs(format[i + 1], valist);
			i++;
		}
		else
		{
			j += print_char(format[i]);
		}
	}
	va_end(valist);
	return (j);
}
