#include "main.h"

/**
 * reverse_array - prints the a string in reverse
 *@a: array ofintegers
 *@n size of array
 * Return: returns nothing
 */

void reverse_array(int *a, int *n)
{
	int i = 0;
	int temp;

	while (i < n)
	{
	temp = a[i];
	a[i] = a[n-1];
	a[n-1] = temp;
	n--;
	i++;
	}
}
