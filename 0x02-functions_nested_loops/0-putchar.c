#include "main.h"

/**
 * main - entry point
 *
 * Description: this is the main function program
 * this program prints _putchar
 * Return: is always 0
 */
int main(void)
{
char xa[] = {'_','p','u','t','c','h','a','r','\0'};
int i;
for(i=0;i<8;i++)
{
_putchar(xa[i]);
}
_putchar('\n');
return (0);
}
