#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - adds two arguments
 *@argc: value for no of arguments.
 *@argv: value for vector arguments.
 *Description: function adds and display value
 *Return: is always 0 if result is good
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc >= 3)
		{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
		}
	else
		{
			printf("%d\n", 0);
			return (0);
		}
}
