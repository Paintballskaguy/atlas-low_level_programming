#include "lists.h"

/**
 * 
 * 
 * 
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (NULL);

	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
