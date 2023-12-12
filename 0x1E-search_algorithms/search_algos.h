#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct listint_s - It is a singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: It is a singly linked list node structure
 *
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int recursive_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif
