#include "lists.h"


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (dlistint_t == NULL)
		return (NULL);

	new_node->n = n;
	new_node.next = NULL;
	new_node.prev = NULL;

	if (*head == NULL)
		return (new_node);

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	new_node.prev = temp;

	return (new_node);
}
