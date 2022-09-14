#include <stdio.h>
/**
*main - prints multiples result count
* @x: is a int variable forloop
* @result: is sum of xs
*Return: return 0
*/
int main(void)
{

int x, result = 0;

for (x = 0; x < 1024; x++)
{
if ((x % 5) == 0 || (x % 3) == 0)
result = result + x;
}
printf("%d\n", result);
return (0);
}
