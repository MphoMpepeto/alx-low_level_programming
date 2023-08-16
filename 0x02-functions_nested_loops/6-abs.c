#include "main.h"

/**
 * _abs - a fucntion that gives the absolute value.
 * @a: the number whose absolute value will be returned.
 * Return: Always 0.
 */

int _abs(int a)

{
	if (a < 0)
	{
	int abs_value;

	abs_value = a * -1;
	return (abs_value);
	}
	return (a);
}
