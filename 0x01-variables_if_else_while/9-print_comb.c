#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this is the main function program
 * this uses putchar and prints only 0-9 with comma and space
 * Return: is always 0
 */
int main(void)
{
int c;
for (c = 10; c < 20; c++)
{
putchar(c%10 + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
