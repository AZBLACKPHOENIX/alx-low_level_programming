#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the list
 * @head: pointer to pointer to head of the lst
 * @n: the data to add to the lst
 *
 * Retrun: new added data
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode, *temp;
if (head == NULL)
return NULL;
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return NULL;
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head  = newnode;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newnode;
}
return (newnode);
}
