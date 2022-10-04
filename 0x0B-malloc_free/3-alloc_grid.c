#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid -  intialize grid arrays
 *@width: size of width array to be created.
 *@height: height of array.
 *Description: function  creates & intialize dynamic arrays
 *Return: will return mulidimentional array
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **gr;

if (widt <= 0 || height <= 0)
{
return (NULL);
}
gr = malloc(sizeof(int *) * height);
if (gr == NULL)
{
return (NULL);
}
	for (i = 0; i< height; i++)
	{
		gr[i] = malloc(sizeof(int) * width);
		if (gr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			free (gr[i]);
			free (gr);
			return (NULL);
		}
	}
		for (i = 0; j < width; j++)
			gr[i][j] = 0;
			return (gr);
 
}
