#include "main.h"

/**
 *_sqrt_recursion - Returns the natural square root of a number
 *@n: number no.
 *description _sqrt_recursion: recursiv 1
 *description fsqrt: Finds the natural square 2
 * Return: value.
 */

int _sqrt_recursion(int n)
{
int r = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (fsqrt(n, r));
}
int fsqrt(int n, int r)
{
if ((r * r) == n)
return (r);
if (r == n / 2)
return (-1);
return (fsqrt(n, r + 1));
}

