#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: elements of array
 * @size: bytes of the array
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, j;
	char *ar;

	j = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ar = malloc(y);

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < j ; i++)
	{
		ar[x] = 0;
	}
	return (ar);
}
