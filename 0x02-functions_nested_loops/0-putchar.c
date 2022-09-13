#include "main.h"
#include "_putchar.c"
/**
 * main - entry point
 *
 * Description: this is the main function program
 * this program prints _putchar
 * Return: is always 0
 */
int main(void)
{
char xa[]="_putchar";
int i;
char p='';
for(i=0;i<7;i++)
{
p=_putchar(xa[i]);
putchar(p);
}
putchar('\n');
return (0);
}
