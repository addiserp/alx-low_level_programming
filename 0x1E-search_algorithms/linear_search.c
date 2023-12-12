#include "search_algos.h"

/**
 * a function that searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: array is a pointer to the first element of the array to search in
 * @size: is the number of elements in array.
 * @value: value is the value to search for
 *
 * Return: return the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
int index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%u] = [%d]\n", index, array[index]);
		if (value == array[index])
			return (index);
	}
	return (-1);
}
