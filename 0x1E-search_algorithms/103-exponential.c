#include "search_algos.h"

/**
 * print_subarray - Prints the elements of an array within a given range.
 * @array: Pointer to the first element of the array.
 * @start: The starting index of the range.
 * @end: The ending index of the range.
 */
void print_subarray(int *array, size_t start, size_t end)
{
    size_t i;

    printf("Searching in array: ");

    for (i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i != end)
            printf(", ");
    }

    printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array using the
 *                 Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @low: The starting index of the search range.
 * @high: The ending index of the search range.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int binaryy_search(int *array, size_t low, size_t high, int value)
{
    size_t mid;

    if (array == NULL)
        return (-1);

    while (low <= high)
    {
        print_subarray(array, low, high);

        mid = (low + high) / 2;

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using the
 *                      Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found
 *         or if the array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t low, high;

    if (array == NULL || size == 0)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    low = bound / 2;
    high = (bound < size) ? bound : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", low, high);

    return binaryy_search(array, low, high, value);
}
