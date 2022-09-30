#include <stdio.h>
#include <stdlib.h>

/**
 *main -  prints the minimum number of coins 
 *@argc: value for no of arguments.
 *@argv: value for vector arguments.
 *Description: function  prints changes of coins 
 *Return: is always 0 if result is good
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	int reminder;
	if (argc == 2)
		{
			for (i = 1; i < argc; i++)
			{
				value = atoi(argv[i]);
				if (value < 0)
				{
				printf("%d\n",0);
				return (0);
				}
				else if (isdigit(*argv[i]))
				{
					if (value - 25 >= 0)
						{
						count += 1;
						reminder = value - 25;
						}
				}
				printf("%d\n",sum);
				return (0);
			}
		}
	else
		{
			printf("Error\n");
			return (1);
		}
}
