#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the result of multiplication.
 * @argc: counts the number of arguments
 * @argv: a vector that stores the argument itself
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);
	return (0);
}
