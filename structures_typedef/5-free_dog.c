#include "dog.h"
#include "main.h"
#include <stdlib.h>

/**
 * free_dog - this will free the memory of the dogs.(structs)
 * @d: pointer to the dog struct.
 * 
 * Return: 
 */

void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);
        free(d->age);
        free(d->owner);
    }
}
