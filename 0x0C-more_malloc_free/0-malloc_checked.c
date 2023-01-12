#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocating memeory with malloc
 * @b: unsigned integer
 * @a: a pointer of allocated memory
 *
 * Retern: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
