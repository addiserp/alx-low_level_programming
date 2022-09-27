#include "main.h"

/**
 * _memset - that fills memory with a constant byte
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * description _memset: a function that fills memory with a constant byte
 * Return: void.
 */

char *_memset(char *s, char c, unsigned int n)
{
long unsigned int i;
char *mem = s, val = c;

for (i = 0; i < n; i++)
	mem[i] = val;
return (mem);
}
