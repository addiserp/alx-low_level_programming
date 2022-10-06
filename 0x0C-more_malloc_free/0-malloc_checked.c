#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked -  creates dynamic memory
 *@b: size of string array.
 *Description: function  creates dynamic arrays
 *Return: will return new created char array
 */

void *malloc_checked(unsigned int b)
{
if (malloc(b) == NULL)
	return (98);
else
	return malloc(b);
}
