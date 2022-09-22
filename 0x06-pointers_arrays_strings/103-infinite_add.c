#include "main.h"

/**                                                                                                                                     
 * infinite_add - Adds the two strings.
 * @n1: first number to be added.
 * @n2: second number to be added.
 * @r: to store the result.
 * @r_index: The current index
 * Return: the result.                                                                            
 */                                                                                                                                     
char *infinite_add(char *n1, char *n2, char *r, int r_index)                                                                             
{
int n, tens = 0;
for (; *n1 && *n2; n1--, n2--, r_index--)
{
n = (*n1 - '0') + (*n2 - '0');
n += tens;
*(r + r_index) = (n % 10) + '0';
tens = n / 10;
}
for (; *n1; n1--, r_index--)
{
n = (*n1 - '0') + tens;
*(r + r_index) = (n % 10) + '0';
tens = n / 10;
}
for (; *n2; n2--, r_index--)
{
n = (*n2 - '0') + tens;
*(r + r_index) = (n % 10) + '0';
tens = n / 10;
}
if (tens && r_index >= 0)
{
*(r + r_index) = (tens % 10) + '0';
return (r + r_index);
}
else if (tens && r_index < 0)
return (0);
return (r + r_index + 1);
}
