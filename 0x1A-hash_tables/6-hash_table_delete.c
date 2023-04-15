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
	hash_node_t *prev = NULL;
	hash_node_t *node = ht->array[idx];

	if (!ht)
		return;
	while (node != NULL)
	{
		if (prev == NULL)
		{
			ht->array[idx] = node->next;
		}
		else
		{
			prev->next = node->next;
		}
		free(node->key);
		free(node->value);
		free(node);
		return;
		prev = node;
		node = node->next;
	}
}
