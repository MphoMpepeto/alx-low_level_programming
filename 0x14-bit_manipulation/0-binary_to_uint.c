#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: a pointer to a char
 * Return: the converted number or 0 if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x, y;
	unsigned int length, sum, power;
	int a = 2;

	sum = 0;
	power = 1;

	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (x = 0; b[x] != '0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		for (y = length - 1; y > 0; y--)
			power = power * a;
		sum = sum + (power * (b[x] - 48));
		length--;
		power = 1;
	}
	return (sum);
}


