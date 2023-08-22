#include "main.h"

/**
 * print_rev - a function that prints the string in reverse
 * @s: represents the string to be printed
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
