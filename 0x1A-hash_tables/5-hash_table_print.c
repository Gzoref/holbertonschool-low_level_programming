#include "hash_tables.h"

/**
 *  hash_table_print - Prints a hash table
 *
 *  @ht: The hash table
 *
 *  Return: The key/value pair according to example
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int count1 = 0, count2;

	hash_node_t *head = NULL;

	if (ht != NULL)
	{
		printf("{");

		while (ht->size > count1)
		{
			if (ht->array[count1] != NULL)
			{
				head = ht->array[count1];

				while (head != NULL)
				{
					printf("'%s': '%s'", head->key, head->value);

					if (head->next != NULL)
					{
						printf(", ");
					}
					head = head->next;
				}
				for (count2 = count1 + 1; count2 < ht->size; count2++)
				{
					if (ht->array[count2])
					{
						printf(", ");
						break;
					}
				}
			}
			count1++;
		}
		printf("}\n");
	}
}
