#include "main.h"
/**
 * cap_string - function for alphabet to upper the 1st word
 * Description: from a string 1st word
 * Return:0
 */
char *cap_string(char *x)
{
	int i = 0;
	while (*(x + i) != '\0')
	{
	if (*(x + i) == '\n' || (*(x + i) >= 32 && *(x + i) <= 47 || *(x + i) >= 58 && *(x + i) <= 64))
	{
    i++;
        if (*(x + i) == '\n' || (*(x + i) >= 32 && *(x + i) <= 47 || *(x + i) >= 58 && *(x + i) <= 64))
        i++;
        if ((*(x + i) >= 'a' && *(x + i) <= 'z'))
        *(x + i) -= 32;
	}
	i++;
    }
	return (x);
}
