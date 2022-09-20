#include "main.h"

/**
 * print_rev - prints the a string in reverse
 *@str: char parameter
 * Return: returns nothing
 */

void print_rev(char *str)
{
	int size = 0;
	int x = 0;

	while (*(str + size) != '\0')
	{
	size++;
	}
	size--;
	while (x <= size)
	{
	_putchar(*(str + size));
	size--;
	}
	_putchar('\n');
}
