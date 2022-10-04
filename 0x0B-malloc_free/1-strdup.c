#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup -  str copy to dynamic arrays.
 *@str: sources string array.
 *Description: function  copy to dynamic arrays.
 *Return: will return new created char array.
 */
char *_strdup(char *str)
{
	int i = 0;
	char *dest;
 
dest = malloc(sizeof(char) * atoi(sizeof(str)));

while (*(str + i) < sizeof(dest))
{
if (dest == NULL)
{
printf("failed to allocate memory\n");
return (NULL);
}
*(dest + i) = *(str + i);
i++;
}
	*(dest + i) = '\0';
	return (dest);
}
