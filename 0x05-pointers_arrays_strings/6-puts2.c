#include "main.h"

/**
 * puts2 - a function that prints alternating characters of a string
 * @str: represents the srting to be printed
 * Return: Always 0.
 */

void puts2(char *str)

{
	int a;
	int b;

	b = 0;
	while (str[b] != '\0')
	{
		b++;
	}

	for (a = 0; a < b; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
