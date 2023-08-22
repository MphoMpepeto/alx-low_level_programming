#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: represents the string
 * Return: Always 0.
 */

void puts_half(char *str)

{
	int c;
	int d;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	if (c % 2 == 1)
	{
		d = (c - 1) / 2;
		d += 1;
	}
	else
	{
		d = c / 2;
	}

	for (; d < c; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
