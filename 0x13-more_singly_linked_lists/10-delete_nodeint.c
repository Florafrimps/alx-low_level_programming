#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given position in a linked list.
 * @head: Pointer to a pointer to the first node in the list.
 * @index: Index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i;
    listint_t *current, *prev;

    if (head == NULL || *head == NULL)
        return -1;

    if (index == 0)
    {
        current = *head;
        *head = (*head)->next;
        free(current);
        return 1;
    }

    prev = *head;
    current = prev->next;
    for (i = 1; current != NULL && i < index; i++)
    {
        prev = current;
        current = current->next;
    }

    if (current == NULL)
        return -1;

    prev->next = current->next;
    free(current);

    return 1;
}
