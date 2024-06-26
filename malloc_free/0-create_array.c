#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - func to create an array of char and int them in order
 * @size: size of array
 * @c: char to intalize array
 *
 * Return: pointer to the array or NULL if fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
