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
	char *s;
	va_list ap;
	
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
	s= va_arg(ap, char *);

	if (s != NULL)
		printf("%s", s);
	else
		printf("(nil)");
	if (i < n-1)
		if (separator)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
