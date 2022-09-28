#include "main.h"

/**
 *factorial - returns factorial of given number
 *@n: given no.
 *description factorial: returns factorial of given number
 * Return: value.
 */
int factorial(int n)
{
n = n * factorial(n - 1);
return (n);
}
