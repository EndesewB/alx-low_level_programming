#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_print - prints the hash table values as a dictionary
 * @ht: the hash table
 *
 * Return: no return just prints the value
 */
void hash_table_print(const hash_table_t *ht)
{
	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (int i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			if (i < ht->size - 1)
			{
				printf(", ");
			}
			current = current->next;
		}
	}
	printf("}\n");
}
