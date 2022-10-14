#include "variadic_functions.h"

/**
 *print_numbers - a function that returns the sum of all its parameters.
 *@n: The size of parameters.
 *@separator: The separator of parameters.
 *Description - print_numbers: a function that sum of all its parameters.
 *Return: sum of result.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(ap, int));
	if (separator != NULL && i != (n - 1))
		printf("%s ", separator);
	}
	va_end(ap);
	printf("\n");
}
