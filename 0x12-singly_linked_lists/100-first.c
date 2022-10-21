#include <stdio.h>
/**
 *bonuse - a function that PRINTS the string before printf.
 *Description - bonuse: a function that prints all its parameters.
 *Return: - void.
 */
void __attribute__((constructor)) bonuse(void);

void bonuse(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
