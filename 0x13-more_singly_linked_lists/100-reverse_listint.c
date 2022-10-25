#include "lists.h"

/**
 * reverse_listint - opposit/reve a linked list.
 * @head: parameter head of a list.
 * Return: head.
 */
listint_t* reverse_listint(listint_t** head)
{
	listint_t* p;
	listint_t* n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
