#include <stdio.h>
/**
*main - prints to 50
*Return: return 0
*/
int main(void)
{
int c;
unsigned long n1 = 0, n2 = 1, n3;
for (c = 0; c < 50; c++)
{
n3 = n1 + n2;
printf("%lu", n3);
n1 = n2;
n2 = n3;
if (inc == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
