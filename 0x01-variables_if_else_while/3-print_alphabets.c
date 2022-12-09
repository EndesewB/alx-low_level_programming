#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char b;
	
	for (b = 'a'; b <= 'z'; b++)
		if (b != 'q' && b != 'e')
			putchar(b);
	putchar('\n');
	return (0);
}
