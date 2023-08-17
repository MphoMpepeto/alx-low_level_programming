#include "main.h"

/**
 * _isupper - function that checks if a char is uppercase
 * @c: the variable being evaluated
 * Return: 1 if c is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
