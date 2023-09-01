#include "lists.h"

/**
 * sum_dlistint - Returns the sum data (n) of a linked list.
 * @head: A pointer to pointer to head of linked list.
 * If the list is empty, return 0.
 *
 * Return: The sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	/* Untile having a pointer to the list loop */
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
