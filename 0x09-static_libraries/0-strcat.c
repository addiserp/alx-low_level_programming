#include "main.h"
/**
* _strcat - concatnets two strings
* @dest: destination
* @src: source
* Return: destination
*/

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
int size1 = 0, size2 = 0, totsize = 0;

while (*(dest + size1) != '\0')
{
size1++;
}
while (*(src + size2) != '\0')
{
size2++;
}
totsize = size1 + size2;
char *temp = (char *) malloc(totsize);
while (*(dest + i) != '\0')
{
*(temp + i) = *(dest + i);
i++;
}
while (*(src + j) != '\0')
{
*(temp + i) = *(src + j);
j++;
i++;
}
*(temp + i) = '\0';
return (temp);
}
