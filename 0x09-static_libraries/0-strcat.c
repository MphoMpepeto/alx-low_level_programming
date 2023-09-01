#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @src: the source string
 * @dest: the destination string
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int srclen = 0;
	int destlen = 0;
	int a;

	for (a = 0; dest[a] != '\0'; a++)
		destlen++;
	for (a = 0; src[a] != '\0'; a++)
		srclen++;
	for (a = 0; a <= srclen; a++)
		dest[destlen + a] = src[a];
	return (dest);
}
