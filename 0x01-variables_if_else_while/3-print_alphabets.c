#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this is the main function program
 * this uses putchar and prints a -Z
 * Return: is always 0
 */
int main(void)
{
int x;
for (x = 'a'; x <= 'Z'; x++)
{
if (x < 92)
x=tolower(x);
putchar(x);
}
putchar('\n');
return (0);
}
