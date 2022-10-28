#include "main.h"

/**
 *set_bit - set binary on specific index.
 *@n: binary parameter.
 *@index: binary parameter.
 *Description - set_bit: set binary on specific index.
 *int: void.
 */
int set_bit(unsigned long int* n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);

	return (1);
}
