#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clears a bit at a given position
 * @n: value to clear
 * @index: position to clear
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
{
return (-1);
}
*n = *n & ~(1UL << index);
return (1);
}
