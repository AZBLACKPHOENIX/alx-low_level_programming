#include <stddef.h>
#include "lists.h"

/**
 * find_listint_loop - find the loop in the list
 * @head: pointer to head of the list
 *
 * Description: finds the loop
 * Return: the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *hare = head;
listint_t *tor = head;
if (hare == NULL || hare->next == NULL)
{
return (NULL);
}
do
{
tor = tor->next;
hare = hare->next->next;
if (hare == NULL || hare->next == NULL)
{
return (NULL);
}
}
while (tor != hare);
tor = head;
while (tor != hare)
{
tor = tor->next;
hare = hare->next;
}
return (tor);
}
