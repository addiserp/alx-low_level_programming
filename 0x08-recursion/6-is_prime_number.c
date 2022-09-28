#include "main.h"

/**
 *is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *return: If the number is divisible - 2.
 */

int is_prime_number(int n)
{
	if (n % 2 == 0)
	return (0);
	if (2 == n / 2)
	return (1);
	return (is_prime_number(n, 2 + 1));
	}
