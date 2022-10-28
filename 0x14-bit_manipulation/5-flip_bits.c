#include "main.h"

/**
 *flip_bits - get binary on specific index.
 *@n: binary parameter.
 *@m: binary parameter.
 *Description - flip_bits: get binary on specific index.
 *Return: int.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m
		unsigned long int b = 0;
	while (x > 0)
	{
	b += (x & 1);
	x >>= 1;
	}
	return (b);
}
