#include <stdio.h>
#include "main.h"

/**
*print_square - a function to print out squares
*@s: parameter input
*Return: returns void
*/

void print_square(int s)
{
	int h, w;

	if (s > 0)
	{
		for (h = 0; h < s; h++)
		{
			for (w = 0; w < (s - 1); w++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
