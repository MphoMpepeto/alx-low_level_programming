#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers
 * @a: the first integer that may be swapped.
 * @b: the second integer that the first will be swapped with.
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
