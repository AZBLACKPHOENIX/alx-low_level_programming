#include "function_pointers.h"
/**
 * array_iterator - Execute a function on each element of an array.
 * @array: Pointer to the array.
 * @size: The size of the array.
 * @action: Pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
