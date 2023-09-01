#include "main.h"
/**
 * _memset- store a memory with a value
 * @s: starting address of the memory
 * @b : set the value
 * @n: numer to be modified
 *
 * Return: changeof the arr
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
