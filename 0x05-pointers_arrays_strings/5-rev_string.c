#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int j, i;
	char chr;

	for (j = 0; s[j] != '\0'; ++j)
		;
	
	for (i = 0; i < j / 2; ++i)
	{
		chr = s[i];
		s[i] = s[l - 1 - i];
		s[j - 1 - i] = chr;
	}

}
