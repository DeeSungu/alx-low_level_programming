#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that prints each array element on a newline
 * @array: array element
 * @size: n.o of elements to print
 * @action: pointer to print in regular
 * Return: nothing
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	int x;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
