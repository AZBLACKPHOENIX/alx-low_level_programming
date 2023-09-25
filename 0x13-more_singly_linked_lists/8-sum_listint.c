#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of the linked lists
 * @head: pointer to the head of the list
 * Description: Sums up the elements inside the list
 * Return: 0 if the list is empty or the sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
