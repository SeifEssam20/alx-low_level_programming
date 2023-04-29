#include "lists.h"

/**
 * sum_listint - computes the sum of all the data (n) of a listint_tlinkedlist
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the data (n) of the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}
