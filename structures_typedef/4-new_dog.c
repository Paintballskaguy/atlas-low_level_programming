#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string by allocating new memory.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the new string, or NULL if memory allocation fails.
 */
char *_strdup(const char *str)
{
	char *dup;
	size_t i, len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}

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

	snoop_doggy_dog->name = name_copy;
	snoop_doggy_dog->age = age;
	snoop_doggy_dog->owner = owner_copy;

	return (snoop_doggy_dog);
}
