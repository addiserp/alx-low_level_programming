#include <stdio.h>

/**
 *main - prints its no of arguments
 *@argc: value for no of arguments.
 *@argv: value for vector arguments.
 *Description: function program to display number of arguments
 *Return: is always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argc - 1);
	return (0);
}
