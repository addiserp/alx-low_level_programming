#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n).
 * @head: parameter head of a list.
 * Return: sum of all the data.
 */
int sum_listint(listint_t* head)
{
	int total;

	total = 0;
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
