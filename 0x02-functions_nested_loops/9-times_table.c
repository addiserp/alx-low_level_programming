#include "main.h"
 /**
 * main - entry point
 * Description: print_alphabet print alphabet 10 times
 * Description: this is the main function program
 * Return: is void
 * times_table: print_alphabet print alphabet
*/
void times_table(void)
{
	int x, y, z;
	for (x = 0;x < 10;x++)
	{
		_putchar('0');
			for (y = 1;y < 10;y++)
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