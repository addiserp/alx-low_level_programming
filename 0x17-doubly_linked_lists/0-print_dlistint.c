#include "lists.h"
/**
 * print_dlistint - Linked lists Type doubly
 * @h: from the list points to the head 
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	/* while true to the list */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
