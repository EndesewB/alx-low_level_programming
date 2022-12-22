#include "main.h"
/**
 * rot13 - rot13 encoding
 * Return: pointer to arr
 * @s: string
 */
char *rot13(char *s)
{
	char lowUp1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

	char lowUp2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i = 0, j;

	while (s[i] != 0)
	{
		char c = s[i];

		for (j = 0; j < 52; j++)
		{
			if (c == lowUp1[j])
			{
				s[i] = lowUp2[j];
			}
		}
		i++;
	}
	return (s);
}
