#include "lists.h"

/**
 * free_dilistint - func to free memory from the head of the list.
 * @head: pointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
