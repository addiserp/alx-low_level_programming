#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at * a given position.
 * @h: A pointer to pointer to the h of linked list.
 * @idx: An index of the list where the new  node should be added.
 * @n: The value of the new node.
 *
 * Return: the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *add_node;
	dlistint_t *head;
	unsigned int i;

	add_node = NULL;
	if (idx == 0)	/* It inserts node at beginning of list */
		add_node = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				/* It inserts note at the end of list */
				if (head->next == NULL)
					add_node = add_dnodeint_end(h, n);
				else
				{
					add_node = malloc(sizeof(dlistint_t));
					if (add_node != NULL)
					{
						add_node->n = n;
						add_node->next = head->next;
						add_node->prev = head;
						head->next->prev = add_node;
						head->next = add_node;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (add_node);
}
