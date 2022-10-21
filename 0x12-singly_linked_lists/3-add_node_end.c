#include "lists.h"
/**
 *add_node_end - a function that returns linked elemrnt .
 *@str: The type of parameters.
 *@head: The type of parameters.
 *Description - add_node_end: a function that prints sise parameters.
 *Return: - returns node type size_t.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *add, *lastadd;
int size;
char *temp;

add = malloc(sizeof(list_t));
if (add == NULL)
return (NULL);
temp = strdup(str);
if (add == NULL)
{
free(add);
return (NULL);
}
for (size = 0; str[size]; size++)
;
add->str = temp;
add->len = size;
add->next = NULL;
if (*head == NULL)
*head = add;
else
{
lastadd = *head;
while (lastadd->next != NULL)
lastadd = lastadd->next;
lastadd->next = add;
}
return (*head);
}
