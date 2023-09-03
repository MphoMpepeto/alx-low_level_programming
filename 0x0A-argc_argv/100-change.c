#include <stdio.h>
#include <stdlib.h>

/**
 * min_coins - prints the min number of coins to make change for an amount
 * @cents: the amount of change
 * Return: 0 if successful
 */

int min_coins(int cents)
{
	int cent_25 = 0;
	int cent_10 = 0;
	int cent_5 = 0;
	int cent_2 = 0;
	int cent_1 = 0;
	int coins;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			cent_25++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			cent_10++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			cent_5++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			cent_2++;
		}
		else
		{
			cents -= 1;
			cent_1++;
		}
	}
	coins = cent_25 + cent_10 + cent_5 + cent_2 + cent_1;
	return (coins);
}

/**
 * main - a function that count change
 * @argc: counts the number of argumnets
 * @argv: the array of arguments
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int coins;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = min_coins(cents);
	printf("%d\n", coins);
	return (0);
}
