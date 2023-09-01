#include "main.h"

/**
 * _memcpy - a function that copies n bytes of the memory
 * @src: the pointer to memory location to be copied from
 * @dest: the pointer to the memory location to be copied to
 * @n: the number of bytes in the memory block
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	return (dest);
}

