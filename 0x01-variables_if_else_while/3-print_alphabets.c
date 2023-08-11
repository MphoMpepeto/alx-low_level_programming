#include <stdio.h>

/**
 * main - the entry point of the program
 * Description: 'print alphabet in both lower and uppercase'
 * Return: always 0
 */

int main(void)
{
	int i = 97;
	int j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
