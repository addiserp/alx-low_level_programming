#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints elements of a list.
 * @h: parameter head of a list.
 * Return: no of nodes.
 */
size_t print_listint(const listint_t* h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
return (n);
}
