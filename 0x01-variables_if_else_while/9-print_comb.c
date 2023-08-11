#include <stdio.h>
/**
 * main - entry point
 * Description: 'print single digit numbers separeted by commas andspace'
 * Return: always 0
 */
int main(void)
{
	int z;

	for (z = 48; z <= 57; z++)
	{
		putchar(z);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}


