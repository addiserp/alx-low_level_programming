#include "lists.h"

/**
 * get_dnodeint_at_index - The function gets nth nod from list at index
 * @head: A pointer to head of list.
 * @index: A position of node.
 * Return: The nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	/* If head is NULL */
	if (!head)
		return (NULL);

	/* untile head is not NULL */
	while (head != NULL)
	{
		/* It initializes the index */
		if (i == index)
			break;
		i++;
		/* if index is not found make head point to next  */
		head = head->next;
	}
	/* returns the node */
	return (head);
}
