#include <stdlib.h>
#include <stdio.h>

 /**
 *main -  main function only.
 *@argc: no of paramenters .
 *@argv: paramenter vector.
 *Description - main: a function that perform the operation.
 *Return: value.
 */

int main (int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		prints("error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", ar[i]);
	}
	return (0);
}