#include "main.h"
/**
 * _isalpha - function for alphabet checker
 * Description: check the alphabet is or not
 *@x: is used for input parameter
 * Return:0
 */
int _isalpha(int x)
{
	if (x >= 'A' && x <= 'z')
		return (1);
	else
		return (0);
}
int main(void)
{
	int r;
	r = _isalpha('H');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}