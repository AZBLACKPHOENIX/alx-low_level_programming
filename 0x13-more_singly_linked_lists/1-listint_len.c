#include <stddef.h>
#include "lists.h"

/**
 * listint_len - lists the length of the list
 * @h: head to pointer of the list
 * Description: a function to list the length of the node
 *
 * Return: lenth of the nodes
 */
size_t listint_len(const listint_t *h)
{
size_t counter = 0;
while (h != NULL)
{
counter++;
h = h->next;
}
return (counter);
}
