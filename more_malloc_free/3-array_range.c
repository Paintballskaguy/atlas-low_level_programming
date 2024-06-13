#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * containing values from min to max.
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: Pointer to the newly created array, or NULL if min > max or if
 *         malloc fails.
 */

int *array_range(int min, int max)
{
	int *array;
	int num_el, i;
	int *t;

	if (min > max)
		return (NULL);

	num_el = (max - min + 1);

	array = malloc(num_el * sizeof(*t));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < num_el; i++)
		array[i] = min++;

	return (array);
}
