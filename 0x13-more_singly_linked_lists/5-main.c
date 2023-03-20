#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *new_node;
        listint_t *temp = *head;

        new_node = malloc(sizeof(listint_t));
        if (new_node != NULL)
        {
                new_node->n = n;
                new_node->next = NULL;
        }
        else
                return (NULL);
        if (temp != NULL)
        {
                while (temp->next != NULL)
                        temp = temp->next;
                temp->next = new_node;
        }
        else
                *head = new_node;
        return (new_node);
}

void free_listint(listint_t *head)
{
    if (head)
	{
		free_listint(head->next);
		free(head);
	}
}

int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    free_listint(head);
    head = NULL;
    return (0);
}
