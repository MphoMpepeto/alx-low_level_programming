#include "main.h"

/**
 * print_alphabet_x10 - print the letters of the alphabet 10 times
 *
 * Return: always void
 */

void print_alphabet_x10(void)
{
	int a = 97;
	int n = 0;

	while (n < 10)
	{
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		n++;
	}

}

