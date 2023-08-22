#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: represents the string
 * Return: Always 0.
 */

void rev_string(char *s)

{
	int length = 0, index = 0;
	char dis;

	while (s[index++])
		length++;

	for (index = length - 1; index >= length / 2; index--)
	{
		dis = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = dis;
	}
}
