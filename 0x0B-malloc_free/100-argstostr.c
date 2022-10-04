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
		int i = 0, j = 0, z = 0;
		int size = 0;
		char **str;

		if (ac == 0 || av == NULL)
		{
		return (NULL);
		}
		for (i = 0; i < ac; i++)
			for (j = 0; av[i][j] != '\0'; j++)
				size++;
		str = malloc(sizeof(char) * (size + ac + 1));
		if (str == NULL)
		{
		return (NULL);
		}
		for (i = 0; i < ac; i++)
			{
			for (j = 0; av[i][j] != '\0'; j++)
				{
				str[z] = av[i][j];
				z++;
				}
				str[z] = '\n';
				z++;
			}
		return (str);
}
