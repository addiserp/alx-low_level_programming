#include <stdio.h>
#include "main.h"

/**
 *print_most_numbers - prints numbers without 2 & 4
 *Return: returns nothing
 */

void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if ((x == 50) || (x == 52))
		{
			continue;
		}
		putchar(x);
	}
	putchar(10);
}
