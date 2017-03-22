#include <unistd.h>
#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * convert_binary - converts int or dec to
 * binary and returns length. Calls print_us
 * function which prints to std output
 * @args: arguements
 * Return: int
 */
int convert_binary(va_list args)
{
	int remainder;
	int binary = 0;
	int i, num;
	int binCopy;
	int counter;

	i = 1;
	counter = 0;
	num = va_arg(args, int);

	while (num != 0)
	{
		remainder = num % 2;
		num = num / 2;
		binary += (remainder * i);
		i = i * 10;
	}

	binCopy = binary;

	while (binCopy != 0)
	{
		binCopy /= 10;
		counter += 1;
	}

	print_us((unsigned int)binary);

return (counter);
}

/**
 * reverse_string - reverses string and prints to std output
 * @args: arguements
 * Return: int
 */
int reverse_string(va_list args)
{
	int i;
	char *s;

	s = va_arg(args, char *);

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}

	for (i = i; i >= 0; i--)
	{
		(write(1, s, 1));
		s--;
	};

return (i);
}
