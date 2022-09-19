#include "main.h"

/**
 * print_rev - prints the a string in reverse
 *@str: char parameter
 * Return: returns nothing
 */

void print_rev(char *str)
{
	int size =0;

	while (*(str + size) != '\0')
	{
	size++;
	}
	while (size > 0)
	{
	_putchar(*(str + size));
	size--;
	}
	_putchar('\n');
}
