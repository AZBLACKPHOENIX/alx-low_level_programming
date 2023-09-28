#include "main.h"

/**
 * get_bit - prints the value of the bit at a given index
 * @n: the value to be checked
 * @index: index of the bit
 * Return: n sucess, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int numbits = sizeof(unsigned long int) * 8;
unsigned long int mask = 0;
if (index < numbits)
{
mask = 1UL << index;
return ((n & mask) ? 1 : 0);
}
else
{
return (-1);
}
}
