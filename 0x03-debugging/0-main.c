#include <stdio.h>
#include <stdlib.h>

/**
* main - tests function that prints if integer is positive or negative
* positive_or_negative - chech n is + or -
* Return: 0
*/
void positive_or_negative(int n)
{

if (n < 0)
printf ("%d is negative\n", n);
else if (n == 0)
printf ("%d is zero\n", n);
else if (n > 0)
printf ("%d is positive\n", n);
}
int main(void)
{
	int i;
	i = 0;
	positive_or_negative(i);
    return (0);
}
