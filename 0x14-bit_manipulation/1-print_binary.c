#include "main.h"

/**
 * print_binary - a func that prints a binary representation of a number
 * @n: a number
 *
 * Return: the rep of a number
 */

void print_binary(unsigned long int n)
{
	int print_f = 0;
	int bit_pos;

	if (n == 0)
	{
		_putchar('0');
	}

	bit_pos = sizeof(unsigned long int) * 8 - 1;

	while (bit_pos >= 0)
	{
		unsigned long int x = 1UL << bit_pos;

		if ((n & x) != 0)
		{
			_putchar('1');
			print_f = 1;
		}
		else if (print_f)
		{
			_putchar('0');
		}
		bit_pos--;
	}
}
