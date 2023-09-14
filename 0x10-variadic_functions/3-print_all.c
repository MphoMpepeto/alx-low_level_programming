#include "variadic_functions.h"

/**
 * print_all - a function that prints anything folloewd by a new line
 * @format: a list of types of arguments passed to the function
 * Return:
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int x;
	double y;
	char *string;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == 'c')
		{
			x = va_arg(args, int);
			printf("%c", (char)x);
		}
		else if (*format == 'i')
		{
			x = va_arg(args, int);
			printf("%d", x);
		}
		else if (*format == 'f')
		{
			x = va_arg(args, double);
			printf("%f", y);
		}
		else if (*format == 's')
		{
			string = va_arg(args, char *);
			if (string == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", string);
			}
		}
	
		if (*format != '\0')
		{
			printf(", ");
		}
	}
	va_end(args);
	printf("\n");
}
