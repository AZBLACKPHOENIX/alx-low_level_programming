#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The characters to search for in s
 *
 * Return: A pointer to the first occurrence in s of any character in accept,
 * or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
int i;
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
return s;
}
}
s++;
}
return NULL;
}
