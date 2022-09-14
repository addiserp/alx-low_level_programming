#include <stdio.h>
/**
*main - prints multiples result count
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
