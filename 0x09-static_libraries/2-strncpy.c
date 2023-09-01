#include "main.h"

/**
 * _strncpy - a funtion that copies strings
 * @src: source string
 * @dest: destination string
 * @n: integer variable
 * Return: a pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
