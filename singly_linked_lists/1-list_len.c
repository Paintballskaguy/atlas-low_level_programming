#include "lists.h"

/**
 * list_len - this will print the number of elements in list_t
 * @h: pointer to the list_t
 *
 * Return: the number of elements in list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h.next;
	}
	
	return (count);
}
