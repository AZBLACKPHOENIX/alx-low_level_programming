#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of the linked lists
 * @head: pointer to the head of the list
 */
int sum_listint(listint_t *head)
{
int sum;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
