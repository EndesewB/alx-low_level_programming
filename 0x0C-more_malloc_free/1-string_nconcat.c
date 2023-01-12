#include "main.h"
#include <stdlib.h>
/**
 *_slen - string length
 *@s: input string
 *
 *Return: returns length
 */
int _slen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - concatenates twwo strings
 * @s1: destination string
 * @s2: sourse string
 * @n: number of characters
 * Return: sn On success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sn;

	int i, j, slen1, slen2;

	slen1 = _slen(s1);
	slen2 = _slen(s2);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n < slen2)
	{
		sn = malloc(1 + sizeof(char) * (slen1 + n));
	}
	else
	{
		sn = malloc(1 + sizeof(char) * (slen1 + slen2));
	}
	for (i = 0; s1[i] != 0; i++)
	{
		sn[i] = s1[i];
	}
	for (j = 0; s2[j] != 0 && j != n; j++)
	{
		sn[i] = s2[j];
		i++;
	}
	return (sn)
}
