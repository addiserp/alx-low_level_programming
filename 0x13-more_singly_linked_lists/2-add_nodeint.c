#include "lists.h"

/**
 * add_nodeint - add a new node at the 1st place
 * @head: parameter head of a list.
 * @n: parameter element.
 * Return: NUll if it failed.
 */
listint_t* add_nodeint(listint_t** head, const int n)
{
	listint_t* nptr;

	nptr = malloc(sizeof(listint_t));

	if (nptr == NULL)
		return (NULL);
	nptr->n = n;
	nptr->next = *head;
	*head = nptr;
	return (*head);
}
