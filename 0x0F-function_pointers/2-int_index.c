#include "function_pointers.h"

/**
 * int_index - searhes for an integer in a set of array
 * @array: the array of integers to be searched
 * @size: the size of array to be searched
 * @cmp: function pointer that compares the integers
 * Return: index of first element that matches with 'cmp' or -1 if not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}

	return (-1);
}
