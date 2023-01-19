#include "variadic_functions.h"
/**
 * sum_them_all - sums all the elements of the arguments
 * @n: number of elements
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ar_list;
	int sum = 0;
	unsigned int i;

	va_start(ar_list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ar_list, int);
	}

	va_end(ar_list);

	return (sum);
}
