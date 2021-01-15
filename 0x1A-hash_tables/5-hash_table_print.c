#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: Hash tables.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i;
	char *separator;

	putchar('{');
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				printf("%s'%s': '%s'", separator, node->key, node->value);
				node = node->next;
				printf(", ");
			}
		}
		printf("}\n");
	}
}
