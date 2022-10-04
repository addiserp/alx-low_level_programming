#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* argstostr - concatnets give parameters strings
* @ac: size of parameter
* @av: array vector
* Return: newly creted dynamic array
*/

char **strtow(char *str)
{
	char **s;
	int i, len = 0, len2 = 0;
	
	if (str == NULL || str[0] == '\0')
		return (NULL);
	len = strlen(str);
	if (len == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		{
			len2 = stringwordcount(s);
			s[i] = malloc(sizeof(char) * (len2 + 1));
				if (s[i] == NULL)
					{
					for (;i >= 0; i--)
					free(s[i]);
					free(s);
					return (NULL);
					}
			for (j = 0;j < len2; j++)
				s[i][j] = str[len++];
			s[i][j] = '\0';
		}
		s[i] = NULL;
		return (s);
}
