#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

if (!head || !str)
return (NULL);

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}

new_node->len = _strlen(new_node->str);
new_node->next = *head;
*head = new_node;

return (new_node);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to be checked
 *
 * Return: the length of the string
 */
unsigned int _strlen(char *s)
{
unsigned int len = 0;

while (*s++)
len++;

return (len);
}
