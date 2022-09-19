#include "main.h"

/**
 * print_rev - prints the a string in reverse
 *@str: char parameter
 * Return: returns nothing
 */

void print_rev(char *str)
{
	int s = -1;

	while (*(str + s) != *(str))
	{
	_putchar(*(str + s));
	s--;
	}
	_putchar('\n');
}
