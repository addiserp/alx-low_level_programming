#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *_realloc -  re allocate dynamic array
 *@ptr: a string array.
 *@old_size: old size of array.
 *@new_size: new size of array
 *Description - array_range.
 *Return: will return new created char array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *newptr, i;
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		newptr[i] = ptr[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
		newptr[i] = ptr[i];
	}
	free(ptr);
	return (newptr);
}
