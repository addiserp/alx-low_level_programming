#include "main.h"
/**
 * cap_string - function for alphabet to upper the 1st word
 * Description: from a string 1st word
 * Return:0
 */
char *cap_string(char *)
{
	int i = 0;
	while (*(x + i) != '\0')
	{
	if ( (*(x + i) == 32 )
	{
	i++;
	if ( (*(x + i) >= 'a' && *(x + i) <= 'z'))
        *(x + i) -= 32;
	}
        i++;
    }
	return (x);
}
