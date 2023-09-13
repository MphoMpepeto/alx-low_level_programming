#include "function_pointers.h"

/**
 * int_index - a function tha searches for an integer
 * @array: an array
 * @size: the number of elements in the array
 * @cmp: a function pointer
 * Return: index of char or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]) == 1)
				return (b);
	}
	return (-1);
}
