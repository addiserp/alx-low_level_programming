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
	if (s % 2 == 0)
	_putchar(*(str + s));
	s++;
	}
	_putchar('\n');
}
