#include "lists.h"

/**
 * free_dlistint - frees the inked list.
 * @head: A pointer to head of list.
 *
 * Return: No return.
 */

void free_dlistint(dlistint_t *head)
{
	/* if head is NULL and return if so */
	while (head != NULL)
	{
		/* It goes the list freeing each node */
		dlistint_t *next = head->next;

		free(head);

		head = next;
	}
}
