#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - Print all elements of list_s.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
count++;
}
return (count);
}
