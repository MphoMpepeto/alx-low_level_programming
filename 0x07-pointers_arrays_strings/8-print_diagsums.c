#include "main.h"

/**
 * print_diagsums - a function that locates a substring
 * @a: a pointer to the variable to be printed
 * @size: size of the array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int w;
	int sum_a = 0;
	int sum_b = 0;

	for (w = 0; w < size; w++)
	{
		sum_a += a[w];
		a += size;
	}
	a -= size;

	for (w = 0; w < size; w++)
	{
		sum_b += a[w];
		a -= size;
	}
	printf("%d, %d\n", sum_a, sum_b);
}
