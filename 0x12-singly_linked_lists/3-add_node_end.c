#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head node of the list.
 * @str: The string to be added to the new node.
 *
 * Return: If memory allocation fails or head is NULL, returns NULL.
 *         Otherwise, returns the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
}

return (new_node);
}
