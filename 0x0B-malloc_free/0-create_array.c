#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array -  creates dynamic arrays
 *@size: size of array to be created.
 *@c: sources string array.
 *Description: function  creates dynamic arrays
 *Return: will return new created char array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = malloc(sizeof(char) * size);

	if  (*(str) == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
		*(str + i) = c;
	return (str);
}
