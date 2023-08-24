#include "main.h"

/**
 * _strcmp - a funtion that compares strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int d;

	for (d = 0; s1[d] != '\0' || s2[d] != '\0'; d++)
	{
		if (s1[d] != s2[d])
		{
			if (s1[d] != s2[d])
				return (s1[d] - s2[d]);
		}
	}
	return (0);
}
