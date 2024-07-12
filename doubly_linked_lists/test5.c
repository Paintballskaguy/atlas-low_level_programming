#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    /* Base case: if the list is empty or we've reached the end, return NULL*/
    if (head == NULL) {
        printf("Reached end of list or list is empty. Returning NULL.\n");
        return (NULL);
    }

    /** If the index is 0, we've found the node at the specified index*/
    if (index == 0) {
        printf("Found node at index %u: %d\n", index, head->n);
        return (head);
    }

    /** Debug print*/
    printf("Current node value: %d, moving to next node. Remaining index: %u\n", head->n, index - 1);

    /** Recursive call: move to the next node and decrement the index*/
    return get_dnodeint_at_index(head->next, index - 1);
}