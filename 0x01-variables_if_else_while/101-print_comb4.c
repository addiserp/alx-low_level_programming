#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this is the main function program
 * this uses putchar and prints  different combinations of three digits.
 * Return: is always 0
 */
int main(void)
{
int c, d, e;
for (c = 10; c <= 19; c++)
{
d = c + 1;
for (; d <= 19; d++)
{
e = d + 1;
for (; e <= 19; e++)
{
putchar(c % 10 + '0');
putchar(d % 10 + '0');
putchar(e % 10 + '0');
if (c <= 18 && d <= 19 && !(c == 18 && d == 19 && e == 19))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
