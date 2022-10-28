#include "main.h"

/**
 *get_bit - get binary on specific index.
 *@n: binary parameter.
 *@index: binary parameter.
 *Description - get_bit: get binary on specific index.
 *Return: void.
 */
int get_bit(unsigned long int* n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
