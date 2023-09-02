#include <stdio.h>

/**
 * main - a function that prints all arguments it receives.
 * @argc: counts the number of arguments
 * @argv: a vector that stores the argument itself
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}

