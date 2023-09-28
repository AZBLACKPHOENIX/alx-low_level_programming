#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to unsingned int
 *
 * @b: pointer to character that should be converted
 * Return: result if sucess otherwise, 0 if not sucesss
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
unsigned int bit = 0;
if (b == NULL)
return (0);
while (*b)
{
if (*b != '0' && *b != '1')
return (0);
bit = *b - '0';
result = (result << 1) | (bit);
b++;
}
return (result);
}
