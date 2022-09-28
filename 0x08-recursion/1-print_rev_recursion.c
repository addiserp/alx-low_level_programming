#include "main.h"

/**
 *_print_rev_recursion - Prints strings in reverse
 *@s: A pointer to the memory.
 *description _print_rev_recursion: a function that prints strings in reverse
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
int i, size = 0;
char temp;
for (i = 0; *(s + i) != '\0'; i++)
	size ++;
for (i = 0; *(s + i) != '\0'; i++)
{
temp = s[i];
s[i] =  s[size -1];
s[size - 1] = temp;
size--;
}
_puts_recursion(s);
}


