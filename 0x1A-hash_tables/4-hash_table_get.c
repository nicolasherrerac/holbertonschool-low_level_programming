#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: Hash tables.
 * @key: Key of the element.
 * Return: Null or key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *position;

	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned const char *) key, ht->size);
	position = ht->array[index];

	while (position)
	{
		if (strcmp(position->key, key) == 0)
			return (position->value);
		position = position->next;
	}
	return (NULL);
}
