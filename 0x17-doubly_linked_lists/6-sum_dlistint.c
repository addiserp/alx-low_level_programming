#include "lists.h"
/**
 *sum_dlistint - a function that sums double linked list.
 *@head: The head of parameters.
 *Description - sum_dlistint: a function that sums all its parameters.
 *Return: - returns result.
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp_node = NULL;
int sum = 0;

if (head == NULL)
{
return (0);
}
temp_node = head;

while (temp_node != NULL)
{
sum += temp_node->n;
temp_node = temp_node->next;
}

return (sum);
}
