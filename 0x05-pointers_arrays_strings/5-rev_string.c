#include "main.h"

/**
 * rev_string - prints the a string in reverse
 *@str: char parameter
 * Return: returns nothing
 */

void rev_string(char *str)
{
	int size = 0, s = 0;
	char *temp;
	while (*(str + size) != '\0')
	{
	size++;
	}
	while (0 <= size - 1)
	{
	*(temp + s) = *(str + size - 1);
	size--;
	s++;
	}
	 *str = *temp;
}
