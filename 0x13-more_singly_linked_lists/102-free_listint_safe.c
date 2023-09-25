#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t linked list.
 * @h: A pointer to a pointer to the head of the linked list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t node_count = 0;
listint_t *current = *h;
listint_t *temp = NULL;
while (current != NULL)
{
node_count++;
temp = current;
current = current->next;
free(temp);
if (temp == *h)
{
*h = NULL;
break;
}
}
return node_count;
}
