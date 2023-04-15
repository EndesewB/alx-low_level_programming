#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get - a function to get the value from the hash table
 * @ht: the pointer to hash table
 * @key: the key to be searched
 *
 * Return: the value of the key associated
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int idx = hash(key, ht->size);
	hash_node_t *node = ht->items[idx];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
