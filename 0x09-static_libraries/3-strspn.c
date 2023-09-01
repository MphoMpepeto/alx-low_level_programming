#include "main.h"

/**
 * _strspn - a function that returns the prefix length
 * @s: a pointer to a string
 * @accept: a pointer to a string
 * Return: number of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int e, f;

	for (e = 0; s[e] != '\0'; e++)
	{
		for (f = 0; s[e] != accept[f]; f++)
		{
			if (accept[f] == '\0')
				return (e);
		}
	}
	return (0);
}

