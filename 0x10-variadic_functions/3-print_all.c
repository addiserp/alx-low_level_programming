#include "variadic_functions.h"

/**
 *print_all - a function that all its parameters.
 *@format: The type of parameters.
 *Description - print_numbers: a function that prints all its parameters.
 */

void print_all(const char * const format, ...)
{
op_t ops[] = {{"c",char}, {"i",int}, {"f",float}, {"s",char *}, {NULL,NULL}};
const char type = ops[format].op;
	
	va_list ap;
	va_start(ap, n);

	int i = 0;

	while (i < n)
	{
		if (va_arg(ap, type) != NULL)
			printf("%s\n", va_arg(ap, type));
		else
			printf("(nil\n)");	
		i++;
	}
	va_end(ap);
}
