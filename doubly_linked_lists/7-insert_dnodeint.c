#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: Integer to be added to the new node.
 *
 * Return: Address of the new node, or NULL if it failed or if the index is out of range.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;

	/*Step 1: Check if the head pointer is NULL*/
	if (h == NULL)
		return (NULL);

	/*Step 2: Base case for inserting at the beginning of the list*/
	if (idx == 0)
		return (add_dnodeint(h, n));

	/*Step 3: If the current node is NULL and idx is not 0, insertion is not possible*/
	if (*h == NULL)
		return (NULL);

	/*Step 4: Check if idx is 1, which means the new node should be inserted after the current node*/
	if (idx == 1)
	{
		/*Step 4.1: If the next node is NULL, use add_dnodeint_end to add the node at the end*/
		if ((*h)->next == NULL)
			return (add_dnodeint_end(h, n));

		/*Step 4b: Otherwise, insert the node between the current node and the next node*/
		dlistint_t *new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n;
		new_node->next = (*h)->next;
		new_node->prev = *h;
		(*h)->next->prev = new_node;
		(*h)->next = new_node;
		return (new_node);
	}
	/*Step 5: Recursive case, move to the next node and decrement idx by 1*/
	return (insert_dnodeint_at_index(&((*h)->next), idx - 1, n));
}
