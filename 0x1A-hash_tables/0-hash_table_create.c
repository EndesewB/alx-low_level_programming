#include "hash_tables.h"
/**
 * hash_table_create - the hash table that going to be created
 * @size: the size of the table
 *
 * Return: ponter of the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
}
