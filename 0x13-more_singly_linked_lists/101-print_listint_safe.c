#include "lists.h"

/**
 * print_listint_safe - prints a linked list, handling loops
 * @head: pointer to head node of linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *tmp, *check;

if (head == NULL)
exit(98);

tmp = head;
check = head;

while (tmp != NULL)
{
printf("[%p] %d\n", (void *)tmp, tmp->n);
tmp = tmp->next;
count++;

if (tmp >= check)
{
printf("-> [%p] %d\n", (void *)tmp, tmp->n);
exit(98);
}

if (tmp == NULL)
{
check = head;
tmp = check;
}
}
return (count);
}
