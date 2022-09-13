#include "main.h"

/**
 * _putchar - prints alphabet
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
_putchar(x);
}