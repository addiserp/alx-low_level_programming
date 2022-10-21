#include "lists.h"
/**
 *add_node - a function that returns linked elemrnt .
 *@str: The type of parameters.
 *Description - add_node: a function that prints sise parameters.
 *Return: - returns node type size_t.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *add;
int size;
char *temp;

add malloc(sizeof(list_t));
if (add == NULL)
{
    free(add);
    return (NULL);
}
for (size = 0; str[size; size++])
;
add->str = temp;
add->size = size;
add->next = *head;
*head = add;
return (add);
}
