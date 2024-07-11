#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);

    node = get_dnodeint_at_index(head, 5);
    if (node == NULL)
    {
        printf("Error: Node not found at index 5\n");
    }
    else if (node->n != 98)
    {
        printf("Error: Expected value at index 5 is 98, but got %d\n", node->n);
    }
    else
    {
        printf("Value at index 5 is: %d\n", node->n);
    }

    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}