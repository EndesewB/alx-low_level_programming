#include "main.h"
/**
 * _puts_recursion - prints string followed by newline
 * @s: input string
 *
 * Return: 1 on success
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
