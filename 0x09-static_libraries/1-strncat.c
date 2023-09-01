#include "main.h"
#include <string.h>

/**
 * _strncat - a funtion that joins two strings
 * @src: source string
 * @dest: destination string
 * @n: integer variable
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int b;

	for (b = 0; b < n && *src != '\0'; b++)
	{
		dest[len + b] = *src;
		src++;
	}
	dest[len + b] = '\0';
	return (dest);
}
