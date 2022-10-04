#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - concatnets give parameters strings
* @ac: size of parameter
* @av: array vector
* Return: newly creted dynamic array
*/
char *argstostr(int ac, char **av)
{
		int i = 0, j = 0;
		char *str1;
		char **str2;

		if (ac == 0 || av == NULL)
		{
		return (NULL);
		}
		for (i = 0; i < ac; i++)
			for (j = 0; av[i][j] != '\0'; j++)
				str2[i][j] = av[i][j] ;
		return (str2);
}
