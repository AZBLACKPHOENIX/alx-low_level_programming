#include "main.h"

/**
 * _strlen - get length of string
 * @s: the value to check
 * Return: length of string
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
