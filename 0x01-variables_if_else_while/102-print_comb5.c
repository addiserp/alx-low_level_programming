#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this is the main function program
 * different combinations of four with pairing digits.
 * Return: is always 0
 */
int main(void)
{
int c, d, e, f;
for (c = 10; c <= 19; c++)
{
/*d = c + 1;*/
for (d = 10; d <= 19; d++)
{
/*e = d + 1;*/
for (e = 10; e <= 19; e++)
{
f = e;
for (; f <= 19; f++)
{
putchar(c % 10 + '0');
putchar(d % 10 + '0');
putchar(' ');
putchar(e % 10 + '0');
putchar(f % 10 + '0');
if (c <= 18 && d <= 19 && !(c == 17 && d == 18 && e == 19))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
