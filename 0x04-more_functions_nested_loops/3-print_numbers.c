#include "main.h"
#include <stdio.h>
/**
 *print_numbers - main function to print from 0 - 9
 *Description: takes no parameter prints from 0 - 9
 *Return: returns nothing
 */

void print_numbers(void)
{
int x;
for (x = 48; x < 58; x++)
	putchar(x);
	putchar('\n');
}

