#include "main.h"

/**
 *is_prime_number - Checks if a number is prime.
 *@n: The number to be checked.
 *return: 1 or 0.
 */

int is_prime_number(int n)
{
	if (n % 2 == 0)
	return (0);
	if (n / 2 == 2)
	return (1);
	return (is_prime_number(n - 1));
	}
