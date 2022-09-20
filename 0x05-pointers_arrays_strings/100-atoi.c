#include "main.h"

/**
* _atoi - converts a strings to intiges
* @s: the string parameter
*
* Return: the intiges
*/

int _atoi(char *s)
{
	int size = 0;
	int i, sign = 0;
	unsigned int val = 0;

	while (*(s + size) != '\0')
	{
	size++;
	}

	for (i = 0; i < size; i++)
	{
		if ((*s + i) == '-')
			sign = 1;
		else if ((*s + i) >= 0 && (*s + i) <= 9)
			val *= 10 + (*s + i);
	}
		if (sign == 1)
			val *= -1;
	return (val);
}
