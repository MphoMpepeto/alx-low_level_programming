#include "main.h"

/**
 * print_diagonal - function prints lines diagonally
 * @n: the number of times the char should be printed
 * Return: an integer
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int m, p;

		for (m = 0; m < n; m++)
		{
			for (p = 0; p <= m; p++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
