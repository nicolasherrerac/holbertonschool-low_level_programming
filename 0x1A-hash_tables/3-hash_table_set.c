#include "hash_tables.h"
/**
 * hash_table_set - set value of index hash table.
 * @ht: Hash table.
 * @key: Key of the element.
 * @value: value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *node = NULL, *temp_node = NULL;

	if (!key || !ht || !value)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(node->key);
		free(node->value);
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if ((ht->array)[index] != NULL)
	{
		temp_node = (ht->array)[index];
		while (temp_node)
		{
			if (strcmp(temp_node->key, key) == 0)
			{
				free(temp_node->value);
				temp_node->value = strdup(value);
				return (1);
			}
			temp_node = temp_node->next;
		}
		node->next = (ht->array)[index];
		ht->array[index] = node;
	}
	else
		(ht->array)[index] = node;
	return (1);
}
