#include <function_pointers.h>
#include <stdlib.h>
/**
 *dprint_nameog -  Prints name of given.
 *@name: paramenter string.
 *@f: pointer to print.
 *Description - print_name: a function to print name.
 *Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
