#include <stdio.h>
/**
 * main - program entry point
 * Description: 'print numbers of base 10 without using char variables'
 * Return: always 0
 */
int main(void)
{
	int h;
	
	for (h = 0; h <= 9; h++)
	{
		putchar(h + 48);
	}
	putchar('\n');
	return (0);
}
