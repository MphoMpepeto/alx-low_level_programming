#include "main.h"

/**
 * _strlen_recursion - a function that prints a string in reverse
 * @s: the pointer to a string
 * _putchar: a function that prints to std output
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
else
	return (1 + _strlen_recursion(s + 1));
_putchar(*s);
}

