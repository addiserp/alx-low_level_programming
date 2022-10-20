#include "lists.h"
/**
 *print_list - a function that PRINTS linked list.
 *@h: The type of parameters.
 *Description - print_list: a function that prints all its parameters.
 *Return: - returns node type size_t.
 */

size_t print_list(const list_t *h)
{
size_t n = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
n++;
h = h->next;
}

return (n);
}
