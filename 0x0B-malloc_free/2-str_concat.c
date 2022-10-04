#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concatnets two strings
* @s1: destination
* @s2: source
* Return: destination
*/
char *str_concat(char *s1, char *s2)
{
		int i = 0, j = 0, len1 = 0, len2 = 0, totlen = 0;
		char *str;

		while (s1[i++])
		len1++;
		i = 0;
		while (s2[i++])
		len2++;

		totlen = len1 + len2 + 1;
		str = malloc(sizeof(char) * totlen);
		for (i = 0; i < len1; i++)
		*(str + i) = *(s1 + i);

		for (i = len1, j = 0; i < totlen; i++, j++)
		*(str + i) = *(s2 + j);
		return (str);
}
