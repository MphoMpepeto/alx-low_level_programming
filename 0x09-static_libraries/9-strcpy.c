#include "main.h"

/**
 * *_strcpy - A function that copies a string
 * @src: the string
 * @dest: A buffer
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)

{
	int f;

	for (f = 0; src[f] != '\0'; f++)
	{
		dest[f] = src[f];
	}
	dest[f++] = '\0';
	return (dest);
}
