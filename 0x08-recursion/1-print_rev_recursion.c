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

	   _size(*s,&size);

		for (i = 0; *(s + i) != '\0'; i++)
		{
			temp = s[i];
			s[i] =  s[size -1];
			s[size - 1] = temp;
			size--;
		}
_puts_recursion1(s);
}

void _puts_recursion1(char *s)
{
if (*(s) != '\0')
{
_putchar(*(s));
if (*(s + 1) == '\0')
{
_putchar('\n');
return;
}
_puts_recursion1(s += 1);
}
if (*(s) == '\0')
{
_putchar('\n');
}
}

void _size(char *s,int *size)
{
if (*(s) != '\0')
{
*size += 1;
_size(*s, &size);
}
}
