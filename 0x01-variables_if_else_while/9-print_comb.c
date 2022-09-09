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
char c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
