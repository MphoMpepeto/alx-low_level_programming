#include "dog.h"

/**
 * init_dog - a function that initializes the variables in struct dog
 * @d: a pointer to the struct dog
 * @name: a pointer to the nam variable address
 * @age: the age of the dog
 * @owner: a pointer to the owner variable address
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
