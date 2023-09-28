#include "main.h"

/**
 * binary_to_uint - a func that converts a binary number to unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, x, y, exp, converted = 0;
	int base;

	base = 2;
	exp = 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		;
	if (i == '1' && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
		return (0);
		for (y = i - 1; y > 0; y--)
		exp = exp * base;
		converted = converted + (exp * (b[x] - 48));
		i--;
		exp = 1;
	}
	return (converted);
}
