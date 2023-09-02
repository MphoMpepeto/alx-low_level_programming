#include <stdio.h>

/**
 * main - a function that writes its own name
 * @argc: counts the number of arguments
 * @argv: a vector that stores the argument itself
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
