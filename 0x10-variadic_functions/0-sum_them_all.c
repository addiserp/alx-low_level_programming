#include "variadic_functions.h"

/**
 *sum_them_all - a function that returns the sum of all its parameters.
 *@n: The size of parameters.
 *Description - sum_them_all: a function that sum of all its parameters.
 *Return: sum of result.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	va_start(ap, n);

	int i, sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
