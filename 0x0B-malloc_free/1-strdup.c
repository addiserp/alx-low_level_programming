#include "main.h"

/**
 *_strdup -  str copy to dynamic arrays
 *@str: sources string array.
 *Description: function  copy to dynamic arrays
 *Return: will return new created char array
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *dest;
	while (*(src + size) != '\0')
	{
		size++;
	}
	dest = malloc(sizeof(char) * size)
	
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
