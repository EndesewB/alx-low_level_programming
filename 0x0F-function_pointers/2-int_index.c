#include "function_pointers.h"

/**
 * int_index - the index to search for an integer
 * @array: the array to be searched 
 * @size: the number of elements in the array
 * @cmp: the function to use to compare values 
 *
 * Return: returns the index of the first element for which the cmp function does not return 0
 * cmp is NULL, return -1. Otherwise return the index of the first match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
