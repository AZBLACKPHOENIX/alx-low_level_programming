#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to delete (index starts at 0).
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *previous;
unsigned int i = 0;
if (*head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = (*head)->next;
free(current);
return (1);
}
while (current != NULL && i < index)
{
previous = current;
current = current->next;
i++;
}
if (current == NULL)
return (-1);
previous->next = current->next;
free(current);
return (1);
}
