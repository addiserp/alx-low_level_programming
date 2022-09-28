#include "main.h"

/**
 *_puts_recursion - Prints strings
 *@s: A pointer to the memory.
 *description _puts_recursion: a function that prints single chars
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
if (*(s) != '\0')
{
_putchar(*(s));
_puts_recursion(s += 1);
}
if (*(s) == '\0')
{
_putchar('\n');
return;
}
}
