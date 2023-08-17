#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 * Return: the size of the square
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int rows, columns;

		for (rows = 1; rows <= size; rows++)
		{
			for (columns = 1; columns <= size; columns++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

