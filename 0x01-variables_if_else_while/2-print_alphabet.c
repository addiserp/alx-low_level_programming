#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this is the main function program
 * this uses putchar and prints a -z
 * Return: is always 0
 */
int main(void)
{
int x;  
for(x = 'a'; x <= 'z'; x++)
{
putchar(x);
putchar('\n');
}
return(0);
}
