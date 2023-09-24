#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_listint - print the elements of the list and returns their number
 * @h: pointer to head of the lists
 *
 * Description - print the elements
 *
 * Return: value of c
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%u\n", h->n);
count++;
h = h->next;
}
return (count);
}
