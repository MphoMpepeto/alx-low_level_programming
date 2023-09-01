#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: represents the string to be printed
 * Return: Always 0.
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
