#include "function_pointers.h"

/**
 * array_iterator - a function that executea a function given as a parameter
 * @array: an array
 * @size: the size of the array
 * @action: a function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
