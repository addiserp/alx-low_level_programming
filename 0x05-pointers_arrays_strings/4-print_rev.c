#include "main.h"

/**
 * print_rev - prints the a string in reverse
 *@str: char parameter
 * Return: returns nothing
 */

void print_rev(char *str)
{
	int size = 0;

	while (*(str + size) != '\0')
	{
	size++;
	}
	while (0 <= size - 1)
	{
	_putchar(*(str + size - 1));
	size--;
	}
	_putchar('\n');
}
