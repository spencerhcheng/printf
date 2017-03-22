#include <unistd.h>
#include "holberton.h"
#include <stdarg.h>

/**
 * _putchar - puts char to std output
 * @args: arguements
 * Return: int
 */
int _putchar(va_list args)
{
	char c;

	c = va_arg(args, int);

	(write(1, &c, 1));

	return (1);
}


/**
 * print_string - prints string to std output
 * @args: arguements
 * Return: int
 */
int print_string(va_list args)
{
	int i;
	char *s;

	s = va_arg(args, char *);

	for (i = 0; *s != '\0'; i++)
	{
		(write(1, s, 1));
		s++;
	};

	return (i);
}

/**
 * print_us - puts unsigned int to std output
 * @b: arguements
 * Return: int
 */
int print_us(unsigned int b)
{
	static int x;
	int y;

	x = 0;

	if (b / 10 != 0)
	{
		x++;
		print_us(b / 10);
	}

	y = ((b % 10) + '0');

	(write(1, &y, 1));

	return (y);
}


/**
 * print_integer - puts integer to std output
 * @args: arguements
 * Return: int
 */
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

	j += print_us((unsigned int)i);

	return (j);
}

/**
 * print_char - puts char to std output
 * @c: char arguement
 * Return: int
 */

int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}
