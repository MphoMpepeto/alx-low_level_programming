#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a function that adds numbers.
 * @argc: counts the number of arguments
 * @argv: a vector that stores the argument itself
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int b;
	int c;
	int sum;

	for (b = 1; b < argc; b++)
	{
		for (c = 0; argv[b][c] != '\0'; c++)
		{
			if (!isdigit(argv[b][c]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[b]);
	}
	printf("%d\n", sum);
	return (0);
}
