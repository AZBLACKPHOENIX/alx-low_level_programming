#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_len - returns the number
 * @h: pointer to read the number of lists
 *
 * Return: Numer of nodes
 * Description: Read the length of nodes and return its value
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h !=  NULL)
{
count++;
h = h->next;
}
return (count);
}
