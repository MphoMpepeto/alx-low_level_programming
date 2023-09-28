#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if big endian or 1 for little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *ptr = (char *)&n;

	if (*ptr == 1)
	{
		return (1);
	}
	else
		return (0);
}
