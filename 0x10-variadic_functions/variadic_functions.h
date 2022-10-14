#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: The size of parameters.
 */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif