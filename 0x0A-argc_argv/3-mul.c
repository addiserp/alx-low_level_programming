#include <stdio.h>

/**
 *main - muliplies two arguments
 *@argc: value for no of arguments.
 *@argv: value for vector arguments.
 *Description: function muliplies and display value
 *Return: is always 0 if result is good
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
	printf("%d\n", argv[1] * argv[2]);
	return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	
}
