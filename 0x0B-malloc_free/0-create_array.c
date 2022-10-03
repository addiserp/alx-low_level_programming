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

	if  (malloc(sizeof(char) * size) == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	char *str = malloc(sizeof(char) * size);
	
	for (i = 0; i < size - 1; i++)
		*(str + i) = c;
	return (str);
}
