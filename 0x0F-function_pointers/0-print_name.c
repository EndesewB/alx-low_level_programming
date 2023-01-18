#include "function_pointers.h"

/**
 * print_name - prints supplyed by another function
 * @name: the name to be print
 * @fun: the function to call to print the name
 *
 */
void print_name(char *name, void (*fun)(char *))
{
	if (f == NULL)
		return;
	fun(name);
}
