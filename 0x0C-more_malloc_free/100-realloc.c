#include "main.h"

/**
 * _realloc - a function that reallocates memory
 * @ptr: a pinter to the memory previously allocated
 * @old_size: the size of the old memory block assigned
 * @new_size: the size of the new memory block assigned
 * Return: a pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;
	char *dest;
	char *src;


	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	src = ptr;
	dest = new_ptr;

	for (i = 0; i < old_size && i < new_size; i++)
		dest[i] = src[i];
	free(ptr);

	return (new_ptr);
}
