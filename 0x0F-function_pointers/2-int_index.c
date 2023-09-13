#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: Pointer to the integer array
 * @size: The number of elements in the array
 * @cmp: A pointer to the comparison function
 *
 * Return: Index of the first element for which cmp function does not return 0,
 * or -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (size <= 0 || array == NULL || cmp == NULL)
{
return -1;
}
for (int i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return i;
}
}
return -1;
}
