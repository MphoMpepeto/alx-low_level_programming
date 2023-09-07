#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of the memory
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);

	if (i == NULL)
	exit(98);
	else
	return (i);
}
