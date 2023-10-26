#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets a bit at a given index
 * @n: value to check
 * @index: position to set
 *
 * Description: set a bit at the given position
 * Return: 1 on success, -1 if any error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n = *n | (1UL << index);
return (1);
}
