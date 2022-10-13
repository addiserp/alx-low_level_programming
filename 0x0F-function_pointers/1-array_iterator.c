#include <function_pointers.h>
#include <stdlib.h>
/**
 *array_iterator -   that executes a function given as a parameter on each element.
 *@array: paramenter string.
 *@size: pointer size.
 *@action: function pointer
 *Description - array_iterator:  a function given as a parameter on each element.
 *Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
