#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *_calloc -  creates dynamic memory
 *@nmemb: 1st string array.
 *@size: size of string array.
 *Description - _calloc:  memory assign.
 *Return: will return new created char array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	return (NULL);
	for (i = 0; i < nmemb * size; i++)
	p[i] = 0;
	return (p);
}
