#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * binary_to_uint - convert binary to int
 * @b: char to pointer value to be converted
 * Description - converts binary to unsigned int
 *
 * Return: 0 if b is null or v consists of not 1 or 0, the converted value
 */
unsigned int binary_to_uint(const char *b)
{
int size = strlen(b);
int base = 1;
unsigned int dec = 0;
int i = 0;
if (b == NULL)
{
return (0);
}
for (i = size - 1; i >= 0; i--)
{
if (b[i] == '1')
{
dec += base;
}
else if (b[i] != '0')
{
return (0);
}
base *= 2;
}
return (dec);
for (i = 0; i < size; i++)
{
if (b[i] != 0 && b[i] != 1)
{
return (0);
}
}
return (0);
}
