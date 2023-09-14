#include "variadic_functions.h"

/**
 * print_all - a function that prints anything folloewd by a new line
 * @format: a list of types of arguments passed to the function
 * Return:
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int x;
	va_list args;
	char *string, *separator = "";

	va_start(args, format);
		while (format != NULL && format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					x = 0;
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					x = 0;
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					x = 0;
					break;
				case 's':
					string = va_arg(args, char*);
					if (string == NULL)
						string = "(nil)";
					printf("%s%s", separator, string);
					x = 0;
					break;
				default:
					x = 1;
					break;
			}
			if (format[i + 1] != '\0' && x == 0)
				printf(", ");
			i++;
		}
	printf("\n");
	va_end(args);
}
