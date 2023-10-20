#include "main.h"

/**
 * is_prime_number - a function that returns 1 for a prime number
 * @n: a given integer
 * Return: the 1 for a prime number
 */

int is_prime_number(int n)
{
	int prime;
	prime = is_prime_number(n / 2);

	if (n == 1 || n == 0)
	{
		return (0);
	}
	else
	
	if (prime == 1)
	{
		return (1);
	}
}
