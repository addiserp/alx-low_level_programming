#include "variadic_functions.h"

/**
 *print_all - a function that all its parameters.
 *@format: The type of parameters.
 *Description - print_numbers: a function that prints all its parameters.
 */

void print_all(const char * const format, ...)
{
	const char types[] = "cifs";
	char *s;
	unsigned int i = 0, j = 0, x = 0;
	va_list ap;

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (types[j])
		{
		if (format[i] == types[j] && x)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), x = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), x = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), x = 1;
				break;
			case 's':
				s = va_arg(ap, char *), x = 1;
					if (!s)
					{
						printf("nil");
						break;
					}
				printf("%s", s);
				break;
		} i++;
	}
	printf("\n");
	va_end(ap);
}
