#include <stdio.h>
/**
 *main - prints result of even fibonacci
 *Return: return 0
*/
int main(void)
{
unsigned long x = 0, y = 1, z = 0, result = 0;
while (z <= 4000000)
{
z = y + x;
x = y;
y = z;
if ((x % 2) == 0)
result += x;
}
printf("%ld\n", result);
return (0);
}
