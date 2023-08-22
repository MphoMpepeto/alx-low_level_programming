#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints a specific number of elements of an array
 * @a: an array of type integer
 * @n: the number of elements in an array
 * Return: Always 0.
 */

void print_array(int *a, int n)

{
	int e;

	for (e = 0; e < n; e++)
	{
		printf("%d", a[e]);
		if (e != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
