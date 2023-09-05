#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that creates an array of initialised chars
 * @str: a pointer to a copy of a string
 *
 * Return: NULL if size = 0, pointer to array if successful
 */

char *_strdup(char *str)
{
	char *str2;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	str2 = malloc(len + 1 * sizeof(char));

	if (str2 == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		str2[i] = str[i];
	return (str2);
}
