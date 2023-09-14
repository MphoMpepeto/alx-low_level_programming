#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings folloewd by a new line
 * @separator: the string to be printed before numbers
 * @n: number of strings passed to the function
 * Return:
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, const char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

