#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value for the array.
 * @max: The maximum value for the array.
 *
 * Return: A pointer to the newly created array, or NULL on failure or invalid input.
 */
int *array_range(int min, int max)
{
int i;
int size;
int *result;
if (min > max)
{
return NULL;
}
size = max - min + 1;
result = malloc(sizeof(int) * size);
if (result == NULL)
{
return NULL;
}
for ( i = 0; i < size; i++)
{
result[i] = min + i;
}
return result;
}
