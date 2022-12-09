#include "lists.h"
/**
 *dlistint_len - a function that conts double linked list.
 *@h: The type of parameters.
 *Description - dlistint_len: a function that counts all its parameters.
 *Return: - returns size.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t lensize = 0;

	while (h != NULL)
	{
		h = h->next;
		lensize++;
	}

	return (lensize);
}
