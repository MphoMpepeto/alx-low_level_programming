#include "main.h"

/**
 * _strchr - a function that returns the first occurance of a char
 * @s: a pointer
 * @c: a character in a string
 * Return: a pointer s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
