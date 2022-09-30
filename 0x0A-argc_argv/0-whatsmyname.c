#include <stdio.h>

/**
 *main - prints its own name
 *@argc: value for no of arguments.
 *@argv: value for vector arguments.
 *Description: function program to display its own name
 *Return: is always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
