#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of initialised chars
 * @size: the size of the array
 * @c: represents the initialised char
 *
 * Return: NULL if size = 0, pointer to array if successful
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}

	return (array);
}
