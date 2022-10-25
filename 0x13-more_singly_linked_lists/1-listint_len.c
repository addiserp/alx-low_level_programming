#include "lists.h"

/**
 * listint_len - returns the no of elements from linked list.
 * @h: parameter head of a list
 * Return: no of nodes.
 */

size_t listint_len(const listint_t* h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
