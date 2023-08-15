#include "main.h"
/**
 *print_sign - a function that checks the sign of numbers.
 * @n: the variable n denotes the numbers to be checked.
 * Description: checks the sign of the numbers.
 * Return: always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
