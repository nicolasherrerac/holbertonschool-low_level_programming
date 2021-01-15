#include "hash_table.h"
/**
 * hash_table_set - set value of index hash table.
 * 
 * @ht: Hash table.
 * @key: Key of the element.
 * @value: value associated with the key.
 * Return: 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *node == NULL, *temp_node == NULL;
	char *val_copy == NULL, *key_copy == NULL;

	if (!key || !ht || !value)
		return (0);

	val_copy = strdup(value);
	if (!val_copy)
		return (0);
	key_copy = strdup(key);
	if (!key_copy)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(key_copy);
		free(val_copy);
		return (0);
	}
	node->key = key_copy;
	node->value = val_copy;
	node->next = NULL;
	if ((ht->array)[index] != NULL)
	{
		temp_node = (ht->array)[index];
		while(temp_node)
		{
			if (strcmp(temp_node->key, key_copy) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = val_copy;
				free(val_copy);
				fre(key_copy);
				return (1);
			}
			temp_node = temp_node->next;
		}
		temp_node = (ht->array)[index];
		node->next = temp_node;
		(ht->array)[index] = node;
	}
	else 
		(ht->array)[index] = node;
	return (1);
}