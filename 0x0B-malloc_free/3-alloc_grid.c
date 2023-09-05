#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2-dimensional array
 * @width: array rows
 * @height: array column
 * Return: NULL if size = 0, pointer to array if successful
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			free(array);
			for (k = 0; k <= height; k++)
				free(array[k]);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			array[i][k] = 0;
	}
	return (array);
}
