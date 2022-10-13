#include "variadic_functions.h"

/**
 *print_strings - a function that PRINTS its parameters.
 *@n: The size of parameters.
 *@separator: The separator of parameters.
 *Description - print_numbers: a function that prints all its parameters.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{	
	unsigned int i;
	va_list ap;
	
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
	if (separator != NULL)
		{
		if (va_arg(ap, int))
			printf("%d%s\n", va_arg(ap, int), separator);
		else
			printf("(nil\n)");
		}
	}
	va_end(ap);
}
