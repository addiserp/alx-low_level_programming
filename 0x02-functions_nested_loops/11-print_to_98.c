#include "main.h"
#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function for upto 98
 * Description: prints natural no to 98
 * @x: parameter no 1
 * Return: void
 */
void print_to_98(int x)
{
	if (x >= 98)
	{
		while (x > 98)
			printf("%d, ", x--);
		printf("%d\n", x);
	}
	else
	{
		while (x < 98)
			printf("%d, ", x++);
		printf("%d\n", x);
	}
}
