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

	hash_node_t *new_hash = NULL, *temp = NULL;

	new_hash = malloc(sizeof(hash_node_t));

	if (ht == NULL || !key || strlen(key) == 0 || value == NULL)
		return (0);

	if (new_hash == NULL)
		return (0);
	temp = new_hash;
	slot = key_index((const unsigned char *)key, ht->size);

	if (ht->array[slot] != NULL)
	{
		new_hash = ht->array[slot];

		while (new_hash != NULL)
		{
			if (strcmp(new_hash->key, key) == 0)
			{
				free(new_hash->value);
				new_hash->value = strdup(value);
				free(temp);
				return (1);
			}
			new_hash = new_hash->next;
		}
	}
	new_hash = hash_table_pair(key, value);
	if (new_hash == NULL)
	{
		free(new_hash);
		return (0);
	}
	new_hash->next = ht->array[slot];
	ht->array[slot] = new_hash;
	free(temp);
	return (1);
}


/**
 *  hash_table_pair - Allocate memory for entry
 *
 *  @key: Key to hashtable
 *
 *  @value: Value associated with key
 *
 *  Return: Entry of key/value
 */
hash_node_t *hash_table_pair(const char *key, const char *value)
{
	hash_node_t *entry = NULL;

	entry = malloc(sizeof(hash_node_t));

	if (entry == NULL)
	{
		return (NULL);
	}

	entry->key = strdup(key);

	if (entry->key == NULL)
	{
		free(entry);
		return (NULL);
	}

	entry->value = strdup(value);

	if (entry->value == NULL)
	{
		free(entry->key);
		free(entry);
		return (NULL);
	}
	entry->next = NULL;

	return (entry);
}
