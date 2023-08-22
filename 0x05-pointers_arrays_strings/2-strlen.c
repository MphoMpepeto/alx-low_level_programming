#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: a variable representing the string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
