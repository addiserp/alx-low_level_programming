#include "main.h"
#include <unistd.h>
/**
 *print_numbers - main function to print from 0 - 9
 *_putchar - writes the character c to stdout
 *@c: the char to print
 *Description: takes no parameter prints from 0 - 9
 *Return: returns nothing
 */
/*Description: function for _putchar */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_numbers(void)
{
int x;
for (x = 48; x < 58; x++)
	_putchar(x);
	_putchar('\n');
}

