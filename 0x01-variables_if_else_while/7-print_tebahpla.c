#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this is the main function program
 * this uses putchar and prints only z -a 
 * Return: is always 0
 */
int main(void)
{
int x;
for (x = 122; x >= 97; x--)
putchar(x);
putchar('\n');
return (0);
}
