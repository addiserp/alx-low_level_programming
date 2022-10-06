#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *string_nconcat -  creates dynamic memory and concatnets two string
 *@s1: 1st string array.
 *@s2: 2nd of string array.
 *@n: size of string 2nd array.
 *Description: string_nconcat merge two arrays
 *Return: will return new created char array
 */

 char *string_nconcat(char *s1, char *s2, unsigned int n)
 {
	char *p;
	unsigned int i, x = 0, y = 0;
	
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[x] != '\0')
	x++;
	while (s2[y] != '\0')
	y++;
	if (n > y)
	n = y;
	p = malloc((x + n + 1) * sizeof(char));
	if (p == NULL)
	return (0);
	for (i= 0; i < x; i++)
	p[i] = s1[i];
	for ( ; i < x + n; i++)
	p[i] = s2[i - x];
	p[i] = '\0';
return (p);
}
