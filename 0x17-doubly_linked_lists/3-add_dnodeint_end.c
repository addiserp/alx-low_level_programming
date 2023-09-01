#include "lists.h"

/**
 * add_dnodeint_end - a function adds node at the end of a list.
 *
 * @head: A pointer to head of list.
 * @n: A data to be added.
 *
 * Return: The address of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	/* Allocating memory for new added node */
	new_node = malloc(sizeof(dlistint_t));

	/* If it fails return NULL */
	if (new_node == NULL)
		return (NULL);

	/* Assigning data to new added node */
	new_node->n = n;

	/**
	 * The new added node is going to be the last node so make next of it as NULL
	 */
	new_node->next = NULL;

	last = *head;

	/* If there is no head/list make new added node as head node */
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		/* It goes till last node */
		while (last->next)
			last = last->next;
		/* It changes the next of last node */
		last->next = new_node;
	}
	new_node->prev = last;

	return (new_node);
}
