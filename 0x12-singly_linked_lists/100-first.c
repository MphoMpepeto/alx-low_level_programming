#include "lists.h"
void firstplace(void)__attribute__ ((constructor));

/**
 * firstplace - a function that runs first
 */

void firstplace(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

