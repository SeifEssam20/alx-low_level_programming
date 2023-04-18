#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a dog struct
 * @d: Pointer to a dog struct
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Nothing
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
