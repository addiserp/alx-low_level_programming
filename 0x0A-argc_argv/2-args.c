#include <stdio.h>

/**
 *main - prints all of arguments
 *@argc: value for no of arguments.
 *@argv: value for vector arguments.
 *Description: function program to display arguments
 *Return: is always 0
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
