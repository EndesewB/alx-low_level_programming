#include "main.h"
/**
 * main - resets the value of pointers
 *
 * Return: 0
 */
void reset_to_98(int)
{
	int n;

	n = 402;
	_putchar("n = %d\n", n);
	reset_to_98(&n);
	_putchar("n = %d\n", n);
	return (0);
}

