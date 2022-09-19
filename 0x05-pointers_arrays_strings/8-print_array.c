#include <stdio.h>
#include "main.h"

/**
* print_array - prints n element of array's'
* @a: array of input parameter
* @n: number of /size
* Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);

	}
	putchar('\n');
}