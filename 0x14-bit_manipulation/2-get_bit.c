#include <stdio.h>
#include "main.h"

/**
 * get_bit - get the value of the bit in an index
 * @n: bit value to check
 * @index: position value starting from 0
 *
 * Description - get the value of a bit from the index position
 * Return: The value of the bit at the given index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
return ((n >> index) & 1);
}
