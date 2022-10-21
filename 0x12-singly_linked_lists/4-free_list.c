#include "lists.h"
/**
 *free_list - a function that returns linked elemrnt .
 *@head: The type of parameters.
 *Description - free_list: a function that prints sise parameters.
 *Return: - returns node type size_t.
 */

void free_list(list_t *head);
{
list_t *temp;
while(head)
{
    temp = head->next;
    free(head->str);
    free(head);
    head = temp;
}
}
