#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main -  prints the minimum number of coins
 *@argc: value for no of arguments.
 *@argv: value for vector arguments.
 *Description: function  prints changes of coins
 *Return: is always 0 if result is good
 */

int main(int argc, char *argv[])
{
	int value = 0, count = 0;

	if (argc == 2)
	{
		
	  if (atoi(argv[1]) < 0)
			{
			printf("%d\n", 0);
			return (0);
			}
		else if (isdigit(*argv[1]))
		{
		value = atoi(argv[1]);
			while (value - 25 >= 0)
			{
				 	count += 1;
					value = value - 25;
			}
			while (value - 10 >= 0)
			{
				 	count += 1;
					value = value - 10;
			}
			while (value - 5 >= 0)
			{
				 	count += 1;
					value = value - 5;
			}
			while (value - 2 >= 0)
			{
				 	count += 1;
					value = value - 2;
			}
			while (value - 1 >= 0)
			{
				 	count += 1;
					value = value - 1;
			}
		}
	printf("%d\n", count);
	return (0);
		}
	else
	{
		printf("Error\n");
		return (1);
	}
}
