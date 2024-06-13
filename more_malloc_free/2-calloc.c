#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each.
 *           The memory is set to zero.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory, or NULL if nmemb or size is 0 or if
 *         memory allocation fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size, i;
	void *point;
	char *char_pointer;
	char *c;

	if (nmemb == NULL || size == NULL)
		return (NULL);

	total_size = (nmemb * size);

	point = malloc(total_size);
	
	if (point == NULL)
		return (NULL);

	char_pointer = ((*c)point);

	for (i = 0; i < total_size; i++)
		char_pointer[i] = 0;

	return (point);
}
