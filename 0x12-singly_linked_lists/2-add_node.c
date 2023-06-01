#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
size_t str_len = 0;

/* Calculate the length of the string */
while (str && str[str_len])
str_len++;

/* Create a new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
/* Duplicate the string */
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = str_len;
new_node->next = *head;
*head = new_node;

return (new_node);
}
