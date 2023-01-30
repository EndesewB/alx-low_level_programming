#include "lists.h"
/**
 * print_listint - prints the element of the node
 * @h: the head pointer or address
 *
 * Return: number of elements and values
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *node = h;

	while (h)
	{
		printf("%d\n", node->n);
		h = h->next;
		n++;
	}
	return (n);
}
