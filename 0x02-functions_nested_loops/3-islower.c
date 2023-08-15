#include "main.h"
/**
 *_islower - a function that checks ifa letter is lowercase.
 * @c: the variable c denotes the letter of the alphabet
 * Description: checks if a letter is lowercase.
 * Return: always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
