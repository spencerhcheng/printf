#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

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
		return (print_char(c));
	}
}

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
			j += convertArgs(format[i + 1], valist);			i++;
		}
		else
		{
			j += print_char(format[i]);
		}
	}
	va_end (valist);
	return (j);
}	
