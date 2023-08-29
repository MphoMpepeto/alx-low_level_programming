#include "main.h"

/**
 * print_chessboard - a function that locates a substring
 * @a: a pointer to the variable to be printed
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
