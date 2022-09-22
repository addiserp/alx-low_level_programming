#include <stdio.h>                                                                                                                    

/**
 * main - the program prints a[2] = 98, followed by a new line.
 * Description: prints a[2] = 98,
 *@n: is used for input parameter
 *@p: is used for input parameter
 *@a: is used for arry integers
 * Return: value
 */                                                                                                                                     
int main(void)                                                                                                                        
{                                                                                                                                     
	int n;
	int a[5];
	int *p;
	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
