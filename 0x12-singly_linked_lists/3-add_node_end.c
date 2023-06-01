#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{

list_t *new_node, *current;
size_t str_len = 0;

while (str && str[str_len])
str_len++;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = str_len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{

current = *head;
while (current->next != NULL)
current = current->next;


current->next = new_node;
}

return (new_node);
}
