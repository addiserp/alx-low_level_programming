#include "main.h"
/**
 * string_toupper - function for alphabet to upper changes
 * Description: check the alphabet is or not
 *@x: is used for input parameter
 * Return:0
 */
char *string_toupper(char *x)
{
	int i = 0;
	while (*(x + i) != '\0')
	{
	if ( (*(x + i) >= 'a' && *(x + i) <= 'z'))
        *(x + i) -= 32;
        i++;
    }
	return (x);
}
