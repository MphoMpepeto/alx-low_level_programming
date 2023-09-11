#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - a struct with information about a dog
 * @name: a pointer to the name of the dog
 * @age: the age of the dog
 * @owner: a pointer to the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
