#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this is the main function program
 * this uses putchar and prints  different combinations of two digits.
 * Return: is always 0
 */
int main(void)
{
int c, d;
for (c = 10; c <= 19; c++)
{
d = c + 1;
for (; d <= 19; d++)
{
putchar(c % 10 + '0');
putchar(d % 10 + '0');

if (c <= 18 && d <= 19 && !(c == 18 && d == 19))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
