#include "main.h"
 /**
 * print_alphabet_x10 - entry point
 * print_alphabet_x10: print_alphabet print alphabet 10 times
 * print_alphabet_x10 : this is the main function program
 * Return: is void
 */
void print_alphabet_x10(void)
{

int x, y;
for (y = 0; y < 10; y++)
{
for (x = 'a'; x <= 'z'; x++)
_putchar(x);
_putchar('\n');
}
}
