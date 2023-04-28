#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to head of list.
 * @idx: index of the list where new node should be added.
 * @n: data to be stored in new node.
 *
 * Return: Address of new node, or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp = *head;
unsigned int i;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (i = 0; temp && i < idx - 1; i++)
temp = temp->next;
if (!temp)
{
free(new);
return (NULL);
}
new->next = temp->next;
temp->next = new;
return (new);
}
