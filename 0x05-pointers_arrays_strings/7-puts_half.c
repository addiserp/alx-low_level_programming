#include "main.h"

/**
 * puts_half - prints the half of string 
 *@str: char parameter
 * Return: returns nothing
 */

void puts_half(char *str);
{
	int size = 0, s = 0;
	int hsize;

	while (*(str + size) != '\0')
	{
	size++;
	}
	hsize = size / 2;
	while (hsize <= size - 1)
	{
	_putchar(*(str + hsize));
	hsize++;
	}
}
