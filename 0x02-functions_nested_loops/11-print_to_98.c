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
		while (n > 98)
			printf("%d, ", n--);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
			printf("%d\n", n);
	}
 }