#include "main.h"
#include <unistd.h>
/**
 *_puts_recursion - Prints strings 
 *@s: A pointer to the memory.
 *description _puts_recursion: a function that prints single chars
 * Return: nothing.
 */
const void _puts_recursion(char *s)
{
if (*(s) != '\0')
{
write(1, *(&s), 1);
_puts_recursion(s+=1);
}
}
