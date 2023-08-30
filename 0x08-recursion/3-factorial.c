#include "main.h"

/**
 * factorial - a function that returns a factorial of a given num
 * @n: an integer or given number
 * Return: the factorial of a given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
	return (1);
	else
	return (n * factorial(n - 1));
}
