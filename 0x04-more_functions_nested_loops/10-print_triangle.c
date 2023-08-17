#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size dimensions of the triangle
 * Return: Always 0.
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int a, b, c;

		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b >= 1; b--)
			{
				_putchar(' ');
			}
			for (c = 1; c <= a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

