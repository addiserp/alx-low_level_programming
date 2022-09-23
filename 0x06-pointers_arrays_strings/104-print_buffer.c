#include "main.h"
#include <stdio.h>

/**                                                                                                                                     
 *print_buffer -  starting with Prints a buffer
 * @b: The buffer to be printed.
 * @size: The size.
 */
 
 void print_buffer(char *b1, int size)
{
int b, i;
for (b = 0; b < size; b += 10)
{
printf("%08x: ", b);
for (i = 0; i < 10; i++)
{
if ((i + b) >= size)
printf("  ");
else
printf("%02x", *(b1 + i + b));
if ((i % 2) != 0 && i != 0)
printf(" ");
}
for (i = 0; i < 10; i++)
{
if ((i + b) >= size)
break;
else if (*(b1 + i + b) >= 31 &&
*(b1 + i + b) <= 126)
printf("%c", *(b1 + i + b));
else
printf(".");
}
if (b >= size)
continue;
printf("\n");
}
if (size <= 0)
printf("\n");
}