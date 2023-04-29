#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_listint_safe - prints a linked list, handling loops
 * @head: pointer to head node of linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *tmp, *check;
    const listint_t *visited[2048] = {NULL};
    size_t index;

    if (head == NULL)
        exit(98);

    tmp = head;
    check = head;

    while (tmp != NULL && count <= 2048)
    {
        printf("[%p] %d\n", (void *)tmp, tmp->n);
        count++;

        /* Check if the node has already been visited */
        index = ((size_t)tmp) % 2048;
        if (visited[index] == tmp)
        {
            printf("-> [%p] %d\n", (void *)tmp, tmp->n);
            exit(98);
        }

        visited[index] = tmp;

        tmp = tmp->next;

        if (tmp == NULL)
        {
            check = head;
            tmp = check;
        }
    }

    return (count);
}
