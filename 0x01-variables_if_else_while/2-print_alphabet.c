#include <stdio.h>
/**
 * main - entry point of program
 * Description: 'output lowercase alphabet'
 * Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{

		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
