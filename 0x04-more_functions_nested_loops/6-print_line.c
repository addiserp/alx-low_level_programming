#include <stdio.h>
#include "main.h"

/**
*print_line - a function to draw a straight line
*@x: parameter
*Return:returns void
*/

void print_line(int x)
{
	while (x-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
