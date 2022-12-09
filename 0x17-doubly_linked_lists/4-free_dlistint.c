#include "lists.h"
/**
 *free_dlistint - a function that free double linked list.
 *@head: The type of parameters.
 *Description - free_dlistint: a function that free a list.
 *Return: - void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempn = NULL;

	while (head != NULL)
	{
		tempn = head->next;
		free(head);
		head = tempn;
	}
}
