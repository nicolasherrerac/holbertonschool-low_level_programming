#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: Hash tables.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL, *next_node = NULL;
	unsigned int i;

	if (!ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				next_node = node->next;
				free(node->value);
				free(node->key);
				free(node);
				node = next_node;
			}
		}
		free(ht->array);
		free(ht);
	}
}
