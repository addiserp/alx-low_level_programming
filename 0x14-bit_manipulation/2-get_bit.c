#include "main.h"

/**
 *print_binary - print binary values.
 *@b: binary parameter.
 *Description - print_binary: print binary to base 10.
 *Return: void.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
