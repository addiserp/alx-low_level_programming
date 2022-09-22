#include "main.h"
/**
 * leet - function for alphabet encoding
 * Description: check the alphabet is or not
 *@x: is used for input parameter
 * Return:0
 */
char *leet(char * l)
{
	int i = 0;
	while (*(x + i) != '\0')
	{
	if (*(x + i) >= 'a' && *(x + i) <= 'A')
        *(x + i) = '4';
	else if (*(x + i) >= 'e' && *(x + i) <= 'E')
        *(x + i) = '3';
	else if (*(x + i) >= 'o' && *(x + i) <= 'O')
        *(x + i) = '0';
	else if (*(x + i) >= 't' && *(x + i) <= 'T')
        *(x + i) = '7';
	else if (*(x + i) >= 'l' && *(x + i) <= 'L')
        *(x + i) = '1';
        i++;
    }
	return (x);
}
