#include "lists.h"
/**
 * free_listint2 - frees a linked list from node.
 * @head: parameter head of a list.
 * Return: void.
 */
void free_listint2(listint_t** head)
{
	listint_t* temp;
	listint_t* x;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = x) != NULL)
		{
			x = x->next;
			free(temp);
		}
		*head = NULL;
	}
}
