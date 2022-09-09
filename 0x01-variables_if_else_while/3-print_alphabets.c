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
int x,y;
for (x = 'A'; x <= 'z'; x++)
{
if (x < 91)
y = x + 32;
else if (x == 92) 
x += 5;
else
y = x - 32;
putchar(y);
}
putchar('\n');
return (0);
}
