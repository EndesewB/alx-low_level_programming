#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_delete - afunction that delete the value of hash table
 * @ht: hash table to be deleted
 * Return: deletes without memory leake
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *prev;
	hash_node_t *node;

	if (!ht)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			prev = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = prev;
		}
		free(ht->array);
		free(ht);
	}
}
