#include "main.h"

/**
 * puts2 - prints the every other  string
 *@str: char parameter
 * Return: returns nothing
 */

void puts2(char *str)
{
	long int s = 0;

	while (*(str + s) != '\0')
	{
	_putchar(*(str + s));
	s = s + 2;
	}
	_putchar('\n');
}
