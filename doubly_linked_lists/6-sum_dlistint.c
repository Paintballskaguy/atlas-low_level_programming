#include "lists.h"

/**
 * 
 * 
 */

int sum_dlistint(dlistint_t *head)
{
	int sum, i;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
