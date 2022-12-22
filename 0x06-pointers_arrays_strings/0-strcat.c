#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char s1[] = "dest ";
	char s2[] = "scr\n";
	char *ptr;

	ptr = _strcat(s1, s2);
	_putchar("%c", ptr);
	return (0);
}

			


