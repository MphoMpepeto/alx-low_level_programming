#include "main.h"

/**
 * binary_to_uint - a func that converts a binary number to unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0')
		{
			converted <<= 1;
		}
		else if (*b == '1')
		{
			converted = (converted << 1) | 1;
		}
		else
			return (0);
		b++;
	}
	return (converted);
}
