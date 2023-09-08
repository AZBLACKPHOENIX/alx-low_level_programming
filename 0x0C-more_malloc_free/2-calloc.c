#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocates memory for an array and initializes it with zeros.
 * @nmemb: The number of elements in the array.
 * @size: The size (in bytes) of each element.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size = nmemb * size;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);
memset(ptr, 0, total_size);
return (ptr);
}

