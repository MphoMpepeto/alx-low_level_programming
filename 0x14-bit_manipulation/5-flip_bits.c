#include "main.h"

/**
 * flip_bits - write a function that returns the number of bits
 * you would need to flip to get from 1 number to another
 * @n: an umsigned long int
 * @m: unsigned long int
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int sum = 0;

	while (result > 0)
	{
		if (result & 1)
			sum++;
		result >>= 1;
	}
	return (sum);
}

