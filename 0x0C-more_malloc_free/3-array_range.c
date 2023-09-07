#include "main.h"

/**
 * array_range - a function that create an array of integers
 * @min: min value in array
 * @max: max value in array
 *
 * Return: a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *x;
	int w
	int size;

	if (min > max)
		return (NULL);
	size = (max - min);
	x = malloc(sizeof(int) * (size + 1));
	if (x == NULL)
		return (NULL);
	for (w = 0; min <= max; w++)
		x[w] = min++;
	return (x);
}
