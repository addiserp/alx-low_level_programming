#include "main.h"

/**
 *puts_half - prints the half of string
 *@str: char parameter
 * Return: returns nothing
 */

void puts_half(char *str)
{
	int size = 0;
	int hsize;

	while (*(str + size) != '\0')
	{
	size++;
	}
	if (size % 2 != 0)
	hsize = (size - 1) / 2;
	else
	hsize = size / 2;

	while (hsize <= size - 1)
	{
	_putchar(*(str + hsize));
	hsize++;
	}
	_putchar('\n');
}
