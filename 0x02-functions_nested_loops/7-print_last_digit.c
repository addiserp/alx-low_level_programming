#include "main.h"
/**
 * print_last_digit - function for last numbers
 * Description: print last digit no
 *@x: is used for input parameter
 * Return: last number
 */
int print_last_digit(int x)
{
int y = x % 10;
	if ((y % 0) < 0)
	y=y * -1;
	_putchar(y + '0');
	return (y);
}