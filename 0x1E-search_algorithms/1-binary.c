#include "search_algos.h"

/**
 * recursive_search - a function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: Index of the number
 */

int recursive_search(int *array, size_t size, int value)
{
	size_t h = size / 2;
	size_t index;

	if (size == 0 || array == NULL)
		return (-1);

	printf("Searching in array");

	for (index = 0; index < size; index++)
		printf("%s %d", (index == 0) ? ":" : ",", array[index]);

	printf("\n");

	if (h && size % 2 == 0)
		h--;

	if (value == array[h])
		return ((int)h);

	if (value < array[h])
		return (recursive_search(array, h, value));

	h++;

	return (recursive_search(array + h, size - h, value) + h);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index of the number
 */

int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
