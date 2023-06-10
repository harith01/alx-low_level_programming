#include "hash_tables.h"
#include <stdlib.h>


/**
 * hash_table_delete - Deletes a hash table
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node->next);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
