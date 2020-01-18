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
	unsigned long int slot = 0;

	hash_node_t *new_hash = NULL;

	if (ht == NULL || !key || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}

	slot = hash_djb2((const unsigned char *)key) % ht->size;

	new_hash = malloc(sizeof(hash_node_t));

	if (new_hash == NULL)
	{
		return (0);
	}

	new_hash->key = strdup(key);

	if (new_hash->key == NULL)
	{
		free(new_hash);
		return (0);
	}

	new_hash->value = strdup(value);

	if (new_hash->value == NULL)
	{
		free(new_hash->key);
		free(new_hash);
		return (0);
	}

	new_hash->next = ht->array[slot];
	ht->array[slot] = new_hash;

	return (1);
}
