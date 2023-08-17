#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that print all natural numbers to from n to 98
 * @n: the given number to print from
 * Return: alwyas 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 97; n++)
		printf("%d, ", n);
	}
	else
	for (; n > 98; n--)
		printf("%d, ", n);
	printf("98\n");
}
