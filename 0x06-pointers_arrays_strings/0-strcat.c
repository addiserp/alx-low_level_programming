#include "main.h"
/**
* _strcat - concatnets two strings
* @dest: destination
* @src: source
* Return: destination
*/

char *_strcat(char *dest, const char *src)
{
int i = 0, len = 0;

	while (dest[i++])
	len++;
		for (i = 0; src[i]; i++)
		dest[len++] = src[i];
return (dest);
}
