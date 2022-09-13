#include "main.h"
 
 /**
 * main - entry point
 *
 * Description: print_alphabet print alphabet 
 * print from a - z 
 * Return: is void
 */
void print_alphabet(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
_putchar(x);
_putchar('\n');
}