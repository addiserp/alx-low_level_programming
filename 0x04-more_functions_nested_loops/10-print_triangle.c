#include <stdio.h>
#include "main.h"

/**
*print_triangle - a function prints a triangle
*@s: parameter of triangle
*Return: returns void
*/

void print_triangle(int size)
{
	int i1, i2;

	if (s > 0)
	{
		for (i1 = 1; i1 <= s; i1++)
		{
			for ((i2 = s - i1); i2 > 0; i2--)
			{
				putchar(' ');
			}

			for (i2 = 0; i2 < i1; i2++)
			{
				putchar('#');
			}

			if (i1 == s)
			{
				continue;
			}

			putchar('\n');
		}
	}
	putchar('\n');
}
