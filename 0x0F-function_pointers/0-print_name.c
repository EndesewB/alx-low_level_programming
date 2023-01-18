#include "function_pointers.h"

/**
 * print_name - prints supplyed by another function
 * @name: the name to be print
 * @f: the function to call to print the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
