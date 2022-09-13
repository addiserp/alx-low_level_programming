#include <unistd.h>

/**
 * _putchar - prints alphabet
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
_putchar(x);
}