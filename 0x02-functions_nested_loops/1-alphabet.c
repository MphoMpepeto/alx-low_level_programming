#include "main.h"

/**
 * print_alphabet - a fucntion that prints the letters of the alphabet
 * Description: 'a function that prints out lowercase letters of the alphabet'
 * Return: always 0
 */
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
