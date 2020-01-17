#include "hash_tables.h"

/**
 *  hash_table_set - Adds an element to the hash table
 *
 *  @ht: The hash table to update
 *
 *  @key: Key to hashtable
 *
 *  @value: Value associated with key
 *
 *  Return: A pointer to the newly created hash table
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int slot =  hash_djb2(key);

	hash_node_t *entry = ht->array[slot];

	if (key == NULL)
	{
		return (0);
	}

	hash_node_t *new_pair = malloc(sizeof(hash_table_t));
	if (new_pair == NULL)
	{
		return (0);
	}

	new_pair->key = malloc(sizeof(hash_table_t) + 1);
	if (new_pair->key == NULL)
	{
		return (0);
	}

	new_pair->value = malloc(sizeof(hash_table_t) + 1);
	if (new_pair->value)
	{
		return (0);
	}

	strcpy(new_pair->key, key);
	strcpy(new_pair->value, value);

	if (entry == NULL)
	{
		ht->array[slot] = new_pair;
	}

	return (1);
}
