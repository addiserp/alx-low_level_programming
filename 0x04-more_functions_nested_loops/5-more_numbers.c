#include "main.h"
#include <stdio.h>

/**
 *more_numbers - prints numbers to 14 10 times
 *@x:var 1
 *@y:var 2
 *Return: returns void
*/

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				putchar((y / 10) + '0');
			}
			putchar((y % 10) + '0');
		}
		putchar('\n');
	}
}
