#include "main.h"

/**
 * flip_bits - calc the number of bits needed to flip
 * @n: intger to check
 * @m: integer to check
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int res = n ^ m;
int count = 0;
while (res)
{
count += res & 1;
res = res >> 1;
}
return (count);
}
