#include "main.h"

/**
 * _memset - a function that fills the 1st n bytes of the memory
 * @s: the pointer to the memory location where memory will be set
 * @b: the value that will be copied to the memory block
 * @n: the number of bytes in the memory block
 * Return: a pointer to the memory block s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
