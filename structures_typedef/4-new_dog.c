#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - func to create a new dog struct and members.
 * @name: name of the member(dog)
 * @age: age of the dog
 * @owner: owner name of the dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoop_doggy_dog;
	char *name_copy;
	char *owner_copy;

	snoop_doggy_dog = malloc(sizeof(dog_t));
	if (snoop_doggy_dog == NULL)
		return (NULL);

	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(snoop_doggy_dog);
		return (NULL);
	}
	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(snoop_doggy_dog);
		return (NULL);
	}
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner_copy = owner;

	return (new_dog);
}
