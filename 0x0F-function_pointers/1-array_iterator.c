#include "function_pointers.h"

/**
 * array_iterator - itorate the action in each array
 * @array: the array to iterate
 * @size: the size of array
 * @action: the action to perform on each array element
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size--)
			action(*array++);
	}
}
