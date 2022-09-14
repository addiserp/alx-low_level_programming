#include "main.h"
/**
 * print_times_table - prints time table
 * @n : input parameter
 * Return: is void
 */
void print_times_table(int n)
{
int d, m, x;
if (n <= 15 && n >= 0)
{
for (d = 0; d <= n; d++)
{
_putchar('0');
for (m = 1; m <= n; m++)
{
_putchar(',');
_putchar(' ');
x = d * m;
if (x <= 99)
_putchar(' ');
if (x <= 9)
_putchar(' ');
if (x >= 100)
{
_putchar((x / 100) + '0');
_putchar((x / 10) % 10 + '0');
}
else if (x <= 99 && x >= 10)
{
_putchar((x / 10) + '0');
}
_putchar((x % 10) + '0');
}
_putchar('\n');
}
}
}