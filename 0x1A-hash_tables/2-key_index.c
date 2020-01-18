#include "hash_tables.h"

/**
 *  key_index - Creates a hash table
 *
 *  @key: Key to hashtable
 *
 *  @size: Size of the array
 *
 *  Return: A pointer to the newly created hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djb2 = hash_djb2(key) % size;

	return (djb2);
}
