#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change for an amount
 * @argc: conts the number of arguments
 * @argv: a vector that stores the argument itself
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins;
	int cent_25;
	int cent_10;
	int cent_5;
	int cent_2;
	int cent_1;

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
	cent_25 = 0, cent_10 = 0, cent_5 = 0, cent_2 = 0, cent_1 = 0;

	while (cents > 0)
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
	coins = cent_25 + cent_10 + cent_5 + cent_2 + cent_1;
	printf("%d\n", coins);
	return (0);
}
