#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int a, b;

	a = argc - 1;

	if (a != 2)
	{
		puts("Error");
		return (1);
	}
	b = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", b);
	return (0);
}
