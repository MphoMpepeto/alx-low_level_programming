#include "main.h"

/**
 * _pow_recursion - a function that raises a number to a certain power
 * @x: an integer to be raised to a certain power
 * @y: an integer, the power or exponent
 * Return: the number raised to an exponent
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
