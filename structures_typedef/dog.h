#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct representing a dog.
 * @name: name of the dog (%s)
 * @age: age of the dog (%f)
 * @owner: owner of the dog (%s)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
