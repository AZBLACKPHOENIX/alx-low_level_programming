#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t node_count = 0;
const listint_t *current = head;
const listint_t *slow_ptr = head;
const listint_t *fast_ptr = head;
while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
current = current->next;
node_count++;
if (slow_ptr == fast_ptr && fast_ptr != head)
{
printf("-> [%p] %d\n", (void *)current, current->n);
exit(98);
}
if (fast_ptr != NULL && fast_ptr->next != NULL)
{
fast_ptr = fast_ptr->next->next;
slow_ptr = slow_ptr->next;
}
else
{
fast_ptr = NULL;
}
}
return (node_count);
}
