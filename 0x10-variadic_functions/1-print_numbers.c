#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers folloewd by a new line
 * @separator: the string to be printed before numbers
 * @n: number of integers passed to the function
 * Return:
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
