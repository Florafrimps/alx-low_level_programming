#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @idx: Index where the new node should be inserted. Index starts at 0.
 * @n: Value to be assigned to the data (n) of the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i = 0;
    listint_t *current = *head;
    listint_t *new_node;

    if (head == NULL)
        return NULL;

    if (idx == 0)
        return add_nodeint(head, n);

    while (current != NULL && i < idx - 1)
    {
        current = current->next;
        i++;
    }

    if (current == NULL || current->next == NULL)
        return NULL;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->next = current->next;
    current->next = new_node;

    return new_node;
}
