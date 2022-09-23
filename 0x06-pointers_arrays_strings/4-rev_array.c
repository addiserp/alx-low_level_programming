#include "main.h"

/**
 * reverse_array - prints the a string in reverse
 *@a: array ofintegers
 *@n size of array
 * Return: returns nothing
 */

void reverse_array(int *a, int n)
{
int tx, i;
for (i = n - 1; i >= n / 2; i--)
{
tx = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = tx;
}
}