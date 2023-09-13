#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: a pointer to a var
 * @f: a function pointer that returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
