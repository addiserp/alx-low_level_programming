#include "main.h"

/**
 *clear_bit - get binary on specific index.
 *@n: binary parameter.
 *@index: binary parameter.
 *Description - clear_bit: get binary on specific index.
 *Return: int.
 */
int clear_bit(unsigned long int* n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
