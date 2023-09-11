#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - a struct with information about a dog
 * @name: a pointer to the name of the dog
 * @age: the age of the dog
 * @owner: a pointer to the owner of the dog
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newD = (dog_t *)malloc(sizeof(dog_t));

	if (newD == NULL)
		return (NULL);

	newD->name = (char *)malloc(strlen(name) + 1);
	newD->owner = (char *)malloc(strlen(owner) + 1);

	if (newD->name == NULL || newD->owner == NULL)
	{
		free(newD->name);
		free(newD->owner);
		free(newD);
		return (NULL);
	}
	strcpy(newD->name, name);
	newD->age = age;
	strcpy(newD->owner, owner);
	return (newD);
}
