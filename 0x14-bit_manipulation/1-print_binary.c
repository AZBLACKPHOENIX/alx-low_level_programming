#include <stdio.h>
#include "main.h"

void print_binary(unsigned long int n)
{
int i;
unsigned int mask = 1U << 31;
int leadingZeros = 1;
for (i = 0; i < 32; i++)
{
if ((n & mask) == 0)
{
if (!leadingZeros || i == 3)
{
_putchar('0');
}
}
else
{
leadingZeros = 0;
_putchar('1');
}
mask >>= 1;
}
}
