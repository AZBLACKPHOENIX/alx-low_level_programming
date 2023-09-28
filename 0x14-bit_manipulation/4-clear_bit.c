#include "main.h"

/**
 * clear_bit - clears a bit at a given index
 * @n: pointer to the number of the bit
 * @index: index position to clear
 * Return: 1 if success else 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int numbit = sizeof(unsigned long int) * 8;
unsigned long mask = 0;
if (index < numbit)
{
mask = 1UL << index;
*n &= ~mask;
return (1);
}
else
{
return (0);
}
}
