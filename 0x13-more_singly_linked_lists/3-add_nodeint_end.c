#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end the node.
 * @head: Parameter head of a list.
 * @n: Parameter n element.
 * Return: NUll if it failed.
 */
listint_t* add_nodeint_end(listint_t** head, const int n)
{
	listint_t* nptr;
	listint_t* temp;

	(void)temp;

	nptr = malloc(sizeof(listint_t));

	if (nptr == NULL)
		return (NULL);

	nptr->n = n;
	nptr->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = nptr;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nptr;
	}
	return (*head);
}
