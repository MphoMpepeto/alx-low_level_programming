#include "main.h"

/**
 * get_bit - a func that returns the value of a bit
 * @n: an integer
 * @index: the index starting at 0
 *
 * Return: The value of the bit at index or -1 if failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	x = 1UL << index;
	if ((n & x) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
