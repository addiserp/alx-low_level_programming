#include "lists.h"
/**
 * dlistint_len - Linked lists Type doubly
 * @h: from the list points to the head
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	/* while true to the list */
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
