#include <stdio.h>

/**
 * main - a function that prints the number of arguments
 * @argc: counts the number of arguments
 * @argv: a vector that stores the argument itself
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
