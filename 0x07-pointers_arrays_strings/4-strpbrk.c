#include "main.h"

/**
 * _strpbrk - a function that searches a string for a set of bytes
 * @s: a pointer to a string
 * @accept: a pointer to a string
 * Return: number of bytes from accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
return ('\0');
}
