#include <unistd.h>
#include "holberton.h"
#include <stdarg.h>

int _putchar(va_list args)
{
	char c;
	
	c = va_arg(args, int);

	(write(1, &c, 1));

	return (1);
}


int print_string(va_list args)
{
	int i;
	char *s;

	s = va_arg(args, char *);

	for (i = 0; s[i] != '\0'; i++)
	{
		(write(1, s, 1));
		s++;
	}
	
	return (i);
}

int print_unsigned(unsigned int b)
{	
	static int x;
	int y;

	x = 0;

	if (b / 10 != 0)
	{
		x++;
		print_unsigned(b / 10);
	}

	y = ((b % 10) + '0');
	
	(write(1, &y, 1));

	return (y);
}


int print_integer(va_list args)
{
	char g;
	int i, j;

	i = va_arg(args, int);

	j = 0;

	g = '-';
		
	if (i < 0)
	{
		write(1, &g, 1);
		i = -i;
		j++;
	}
	
	j += print_unsigned((unsigned int) i);

	return (j);
}

int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}
