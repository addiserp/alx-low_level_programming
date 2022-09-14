#include "main.h"
/**
 * _islower - function started here
 * Description: check the alphabet is islower
 * @x: is used for input parameter
 * Return:0
 */
int _islower(int x)
{

	if (x >= 'a' && x <= 'z')
		return (1);
	else
		return (0);
}
