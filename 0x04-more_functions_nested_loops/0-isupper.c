#include "main.h"
/**
 * main  - check if char is upper alphabet
 * Description: adds a + b
 * @c: parameter sample
  * _putchar - writes the character c to stdout
 * @ch: The character to print
 * Return: always zero
 */
  */
int _putchar(char ch)
{
return (write(1, &ch, 1));
}
int _isupper(int x)
{
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

