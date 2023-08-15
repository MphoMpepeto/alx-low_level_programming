#include "main.h"
/**
 *_isalpha - a function that checks if the letters are in alphabetical order
 * @d: the variable d denotes the letters of the alphabet
 * Description: checks if letter are in alphabetic order.
 * Return: always 0
 */

int _isalpha(int d)
{
	if ((d >= 65 && d <= 97) || (d >= 97 && d <= 122))
	{
	return (1);
	}
	return (0);
}
