#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *name_copy, *owner_copy;
int name_len, owner_len;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (name_len = 0; name[name_len] != '\0'; name_len++)
;
name_copy = malloc(sizeof(char) * (name_len + 1));
if (name_copy == NULL)
{
free(dog);
return (NULL);
}
for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
;
owner_copy = malloc(sizeof(char) * (owner_len + 1));
if (owner_copy == NULL)
{
free(name_copy);
free(dog);
return (NULL);
}
for (name_len = 0; name[name_len] != '\0'; name_len++)
name_copy[name_len] = name[name_len];
name_copy[name_len] = '\0';
for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
owner_copy[owner_len] = owner[owner_len];
owner_copy[owner_len] = '\0';
dog->name = name_copy;
dog->age = age;
dog->owner = owner_copy;
return (dog);
}
;