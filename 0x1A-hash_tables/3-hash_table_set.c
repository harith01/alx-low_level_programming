#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: the table
 * @key: the key
 * @value: the value
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *current_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	
	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];
	node = malloc(sizeof(hash_node_t);
	if (!node)
		return (0);
	if (current_node == NULL)
	{
		ht->array[index] = node;
		node->value = strdup(value);
		node->next = NULL;
		return (1);
	}
	if (strcmp(current_node->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		free(node);
		return (1);
	}

	node->value = strdup(value);
	node->key = strdup(key);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
