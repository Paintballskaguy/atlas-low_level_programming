#include "lists.h"

/**
 * dlistint_len_recursive - Returns the
 * number of elements in a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + dlistint_len(h->next));
}
