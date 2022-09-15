#include "main.h"
#include <unistd.h>
/**
 * main  - check if char is upper alphabet
 * _putchar - writes the character c to stdout
 * _isupper - checks if it is upper case letter
 * @ch: The character to print
 * Return: always zero
 */
/*description - _putchar a function */
int _putchar(char ch)
{
/* description - this function prints char */
return (write(1, &ch, 1));
}
int _isupper(int x)
{
/* description - this function compares chars */
	if (x >= 'A' && x <= 'Z')
	return (1);
	else
	return (0);
}
int main(void)
{
	char c;

	c = 'A';
	int result;

	result = _isupper(c);

	if (result == 1)
	_putchar('1');
	else
	_putchar('0');

	return (0);
}
