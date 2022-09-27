#include "main.h"

/** 
* _strspn - Gets the length of a prefix substring.
* @s: The string to be searched.
* @accept: The prefix to be measured.
* Return: The number of bytes in s which
 */
 char *_strpbrk(char *s, char *accept)
 {
 int index;
 while (*s)
 {
 for (index = 0; accept[index]; index++)
 {
 if (*s == accept[index])
 return (s);
 }
 s++;
 }
 return ('\0');
 }
