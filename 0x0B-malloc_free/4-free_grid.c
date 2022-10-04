#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid -  free grid arrays
 *@grid: size of grid array to be created.
 *@height: height of array.
 *Description: function  creates & free dynamic arrays
 *Return: will return mulidimentional array
 */

void free_grid(int **grid, int height)
{
if (height == 0 || **grid == 0)
{
free(grid);
}
}
