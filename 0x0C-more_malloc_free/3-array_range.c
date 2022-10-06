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

int *array_range(int min, int max)
{
	int *a;
	int i = 0, t = min;

	if (min > max)
	return (0);
	a = malloc(max - min + 1) * sizeof(int));
	if (a == NULL)
	return (0);
	while (i <= max - min)
	a[i++] = t++;
	return (a);
}