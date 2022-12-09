#include "lists.h"
/**
 *add_dnodeint - a function that conts double linked list.
 *@n: The type of parameters.
 *@head: The type of parameters.
 *Description - add_dnodeint: a function that adds new @1st place.
 *Return: - returns new list.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp_node = NULL, *new_node = NULL;

	if (head == NULL)
	return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	temp_node = *head;
	*head = new_node;
	new_node->next = temp_node;

	if (temp_node != NULL)
		temp_node->prev = *head;

	return (new_node);
}
