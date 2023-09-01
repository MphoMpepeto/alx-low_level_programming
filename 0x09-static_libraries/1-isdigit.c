#include "main.h"

/**
 * _isdigit - function that checks if a char is a digit
 * @c: the variable being evaluated
 * Return: 1 on suscess otherwise 0 on failure.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
