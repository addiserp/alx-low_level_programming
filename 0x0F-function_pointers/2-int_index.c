#include "function_pointers.h"


/**
 *int_index - a function that searches for an integer.
 *@array: paramenter string.
 *@size: pointer size.
 *@cmp: function pointer
 *Description - int_index: a function that searches for an integer.
 *Return: integer type.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x] != 0))
			return (x);
		}
	}
	return (-1);
}
