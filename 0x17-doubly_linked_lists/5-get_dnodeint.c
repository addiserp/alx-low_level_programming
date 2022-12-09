#include "lists.h"
/**
 *get_dnodeint_at_index - a function that get double linked list.
 *@head: The head of parameters.
 *@index: The index of parameters.
 *Description - get_dnodeint_at_index: a function that get a list.
 *Return: - specified list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
size_t g_index = 0;

	while (head != NULL)
	{
		if (g_index == index)
			break;
		g_index++;
		head = head->next;
	}

	return (head);
}
