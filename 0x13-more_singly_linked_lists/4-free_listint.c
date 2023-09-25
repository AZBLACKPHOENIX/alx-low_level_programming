#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees the memory of the head
 * @head: pointer to head that must be freed
 */
void free_listint(listint_t *head)
{
listint_t *curr;
while (head != NULL)
{
curr = head;
head = head->next;
free(curr);
}
}
