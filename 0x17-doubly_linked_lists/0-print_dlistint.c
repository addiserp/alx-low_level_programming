#include "lists.h"
/**
 *print_dlistint - a function that PRINTS double linked list.
 *@h: The type of parameters.
 *Description - print_dlistint: a function that prints all its parameters.
 *Return: - returns node type size_t.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t lensize = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		lensize++;
	}

	return (lensize);
}
