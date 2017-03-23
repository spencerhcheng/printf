#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _printf - prints out strings, ints, decimals
 * strings, reverses strings and converts to
 * binary to standard output
 * @format: initial string to print out
 * and look for type match
 * Return: characters
 */
int _printf(const char *format, ...)
{
	willis_t spencer[] = {
	{'c', _putchar},
	{'s', print_string},
	{'d', print_integer},
	{'i', print_integer},
	{'r', reverse_string},
	{'b', convert_binary},
	{'\0', NULL}
	};

	va_list valist;
	int i, j, x;

	j = 0;
	va_start(valist, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (0);

	for (i = 0; format[i]; i++)
	{
		for (x = 0; spencer[x].type != '\0'; x++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == spencer[x].type)
				{
					i = i + 2;
					j += spencer[x].f(valist);
				}
				else if (format[i + 1] == '%')
					i = i + 1;
			}
		}
	j += print_char(format[i]);
	}
va_end(valist);
return (j);
}
