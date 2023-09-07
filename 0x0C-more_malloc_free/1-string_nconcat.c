#include "main.h"

/**
 * string_nconcat - a function that joins two strings
 * @n: size of the memory
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: a pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index;
	char *s;

	unsigned int s1_len = 0;
	unsigned int s2_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index] != '\0'; index++)
		s1_len++;
	for (index = 0; s2[index] != '\0'; index++)
		s2_len++;

	s = malloc(sizeof(char) * s1_len + n + 1);

	if (s == NULL)
		return (NULL);
	if (n >= s2_len)
	{
		for (index = 0; s1[index] != '\0'; index++)
			s[index] = s1[index];
		for (index = 0; s2[index] != '\0'; index++)
			s[s1_len + index] = s2[index];
		s[s1_len + index] = '\0';
	}
	else
	{
		for (index = 0; s1[index] != '\0'; index++)
			s[index] = s1[index];
		for (index = 0; index < n; index++)
			s[s1_len + index] = s2[index];
		s[s1_len + index] = '\0';
	}
	return (s);
}
