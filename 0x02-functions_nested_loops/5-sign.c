#include "main.h"
/**
 * print_sign - function for alphabet checker
 * Description: print sign
 *@x: is used for input parameter
 * Return:0,-1,1
 */
int print_sign(int x)
{
	if (x > 0)
	{
		_putchar('+')
		return (1);
	}
	else if (x < 0)
	{
		_putchar('-');
		return (1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}