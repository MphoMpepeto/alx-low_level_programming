#include "main.h"

/**
 * print_last_digit - a function that prints the last digit
 *@k: k is the variable to be examined
 * Return: Always 0.
 */

int print_last_digit(int k)
{
	int l;

	l = k % 10;
	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}

