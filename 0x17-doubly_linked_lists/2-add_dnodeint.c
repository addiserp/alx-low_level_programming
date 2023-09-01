#include "lists.h"
/**
 * dlistint_len - Linked lists Type doubly
 * @h: from the list points to the head
 *
 * Return: number of elements
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    
    dlistint_t *add_node;

	add_node = malloc(sizeof(dlistint_t));

	if (add_node == NULL)
		return (NULL);
    
    add_node->n = n;
    
    add_node->next = *head;
    
    add_node->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = add_node;
	(*head) = add_node;

	return (add_node);
}
