#include <math.h>
#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array.
 * @value: value is the value to search for
 *
 * Return: return the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	int index = 0;
    int m = (int)sqrt((double)size);
    int k = 0;
    int back = 0;

	if (array == NULL || size == 0)
		return (-1);

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		back = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", back, index);

	for (; back <= index && back < (int)size; back++)
	{
		printf("Value checked array[%d] = [%d]\n", back, array[back]);
		if (array[back] == value)
			return (back);
	}

	return (-1);
}
