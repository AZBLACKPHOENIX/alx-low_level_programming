#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free list and set head to NULL
 * @head: pointer to pointer to head of the list
 */
void free_listint2(listint_t **head)
{
listint_t *current, *temp;
current = *head;
while (current != NULL)
{
temp = current->next;
free(current);
current = temp;
}
*head = NULL;
}
