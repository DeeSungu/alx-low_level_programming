#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @array: arrays
 * @size: n.o of elements in the array
 * @cmp: pointer to the function used to  compare values
 * Return: 0
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (y = 0; y < size; y++)
	{
		cmp(array[y])
			return (y);
	}
	return (-1);
}
