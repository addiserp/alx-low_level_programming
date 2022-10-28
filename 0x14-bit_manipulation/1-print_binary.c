#include "main.h"

/**
 *print_binary - print binary values.
 *@b: binary parameter.
 *Description - print_binary: print binary to base 10.
 *Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
