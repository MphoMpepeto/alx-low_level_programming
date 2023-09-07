#include "main.h"

/**
 * _calloc - a function that allocates memory to an array
 * @size: size of the memory
 * @nmemb: number of elements in an array
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
