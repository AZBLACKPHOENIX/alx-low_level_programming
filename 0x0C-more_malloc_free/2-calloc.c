#include <stdlib.h>
#include "main.h"
/**
 * allocate_array_memory - Allocates memory for an array.
 * @size: The number of elements in the array.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *allocate_array_memory(unsigned int size)
{
void *array = malloc(size);
if (size == 0)
{
return NULL;
}
if (array == NULL)
{
return NULL;
}
return array;
}
