#include "main.h"
 /**
 * times_table: prints time table
 * @x: is int variable
 * @y: is int variable
 * @y: is int variable
 * Return: is void
 * times_table - print 9 multiples
*/
void times_table(void)
{
	int x, y, z;
	for (x = 0; x < 10; x++)
	{
		_putchar('0');
			for (y = 1; y < 10; y++)
			{
				_putchar(',');
				_putchar(' ');
				z = x * y;
				if (z < 10)
					_putchar(' ');
				else
					_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		_putchar('\n');
	}
}
