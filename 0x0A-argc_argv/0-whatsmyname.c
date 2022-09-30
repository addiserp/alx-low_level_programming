#include <stdio.h>

/**
 * main - prints its own name
 * Description: this is the main function program to display its own name
 * Return: is always 0
 */

int main(int argc, char *argv[])
{
	printf("%s", argv[argc - 1]);
	return (0);
}
