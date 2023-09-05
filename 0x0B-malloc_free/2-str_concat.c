#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that creates an array of initialised chars
 * @s1: a pointer to a string
 * @s2: a pointer to a string
 * Return: NULL if size = 0, pointer to array if successful
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len = 0;
	int s2_len = 0;
	int i;
	char *h;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;
	h = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (h == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		h[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		h[s1_len + i] = s2[i];
	return (h);
}
