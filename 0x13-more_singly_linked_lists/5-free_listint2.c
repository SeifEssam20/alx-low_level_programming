#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;

if (head == NULL)
return;

while (*head != NULL)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}

*head = NULL;
}
