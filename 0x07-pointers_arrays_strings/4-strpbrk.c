#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The characters to search for.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strchr(char *s, char c)
{while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
return (NULL);
}
/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
if (_strchr(accept, *s))
return (s);
s++;
}
return (NULL);
}
