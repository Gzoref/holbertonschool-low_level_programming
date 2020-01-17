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

	hash_node_t *temp, *new_hash = malloc(sizeof(hash_node_t));

	if (ht == NULL)
	{
		return (0);
	}

	if (strcmp("", key) == 0)
	{
		return (0);
	}

	slot = key_index((const unsigned char *) key, ht->size);

	if (new_hash == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			free(new_hash);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new_hash->key = strdup(key);
	new_hash->value = strdup(value);
	new_hash->next = ht->array[slot];
	ht->array[slot] = new_hash;

	return (1);
}
