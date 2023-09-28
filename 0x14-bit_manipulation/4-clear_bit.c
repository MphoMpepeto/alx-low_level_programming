#include "main.h"

/**
 * clear_bit - a funct that sets the value of  bit to 0 at index
 * @n: a pointer to a long int
 * @index: an index starting at 0
 * Return: 1 if successful or -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	x = 1UL << index;
	*n &= ~x;
	return (1);
}
