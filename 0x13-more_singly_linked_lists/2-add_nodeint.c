#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node to the beginning of the list
 * @head: a pointer to pointer to head of the list
 * @n: the data to be stored in the list
 * Return: a pointer to the new created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
if (head == NULL)
return (NULL);
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (newnode);
}
