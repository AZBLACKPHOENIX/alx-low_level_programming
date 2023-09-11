#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the new dog.
 *
 * Return: A pointer to the new dog structure, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));
if (newDog == NULL)
{
return NULL;
}
newDog->name = strdup(name);
newDog->owner = strdup(owner);
newDog->age = age;
return newDog;
}
