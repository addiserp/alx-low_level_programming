#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: parameter head of a list.
 * @index: parameter index of the node.
 * Return: returns NULL.
 */
listint_t* get_nodeint_at_index(listint_t* head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
