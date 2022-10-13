#include "variadic_functions.h"

/**
 *sum_them_all - a function that returns the sum of all its parameters.
 *@n: The size of parameters.
 *Description - sum_them_all: a function that sum of all its parameters.
 *Return: sum of result.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	va_start(ap, n);

	int i;

	for (i = 0; i < n; i++)
	{
	if (*separator != NULL)
		printf("%d %c\n",va_arg(ap, int),separator);
	}
	va_end(ap);
}
