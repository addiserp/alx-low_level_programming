#include <stdio.h>
#include "main.h"

/**
*print_diagonal - a function thatt prints a diagonal
*@x: parameter
*Return: returns void
*/

void print_diagonal(int x)
{
	int y, z;

	if (x > 0)
	{
		for (y = 0; y < x; y++)
		{
			for (z = 0; z < y; z++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (y == (x - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}

