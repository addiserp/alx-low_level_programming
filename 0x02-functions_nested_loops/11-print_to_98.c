#include "main.h"
#include <stdio.h>
 /**
 * main - entry point
 * print_to_98: print_alphabet print 98
 * Description: this is the main function program
 *@n: input parameter
 * Return: is void
 */
 void print_to_98(int n)
 {
	if (n > 99)
	{
		for (;n > 98;n--)
			printf("%d, ", n);
	}
	else
	{
		for (;n < 98;n++)
			printf("%d, ", n);
			printf("%d\n", n);
	}
 }