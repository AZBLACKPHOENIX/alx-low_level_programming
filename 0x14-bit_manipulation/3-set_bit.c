#include "main.h"

/**
 * set_bit - set a bit at the given index
 * @n: integer to set
 * @index: index to set
 * Return:1 if success, else 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int numbits = sizeof(unsigned long int) * 8;
unsigned long int mask = 0;
if (index < numbits)
{
mask = 1UL << index;
*n |= mask;
return (1);
}
else
{
return (0);
}
}
