#include "main.h"
/**
 * sqrt2 - the square root of number
 * @a: fist square root value
 * @b: the number that go to sqrts
 *
 * Return: value
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - self calling
 * @n: an integer number
 *
 * Return: nothing
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
