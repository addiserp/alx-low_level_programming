#include "main.h"

/**
 * rev_string - prints the a string in reverse
 *@str: char parameter
 * Return: returns nothing
 */

void rev_string(char *str)
{
	int size = 0, s = 0;
	char temp;

	while (*(str + size) != '\0')
	{
	size++;
	}

	while (s <= size)
	{
	temp = *(str + s);
	*(str + s) = *(str + size);
	*(str + size) = temp;
	size--;
	s++;
	}
}
