#include <stdio.h>
#include "main.h"

/**
 * print_number - a function that Prints a number
 * @n: a parameter
 *Return: Reterns Void
 */

void print_number(int x)
{
	unsigned int n = x;

	if (x < 0)
	{
		putchar('-');
		n =- n;
	}
	if (n > 9)
	{
		print_number(n / 10);
	}
	putchar(n % 10 + '0');
}
