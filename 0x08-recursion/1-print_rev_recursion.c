#include "main.h"

/**
 *_print_rev_recursion - Prints strings in reverse
 *@s: A pointer to the memory.
 *description _print_rev_recursion: a function that prints strings in reverse
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
