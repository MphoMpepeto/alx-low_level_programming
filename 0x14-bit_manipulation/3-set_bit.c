#include "main.h"

/**
 * set_bit - a func that sets the value of a bit to 1 at index
 * @n: a pointer to a long integer
 * @index: the index starting at 0
 *
 * Return: 1 if successful or -1 if failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if ((index >= sizeof(unsigned long int) * 8) || (n == NULL))
	{
		return (-1);
	}
	x = 1UL << index;
	*n |= x;
	return (1);
}
