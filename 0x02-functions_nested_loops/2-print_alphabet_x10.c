#include "main.h"

/**
 * print_alphabet_x10 - print the letters of the alphabet 10 times
 *
 * Return: always void
 */

void print_alphabet_x10(void)
{
	int a;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}

}
