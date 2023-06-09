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
	hash_node_t *node = NULL;
	hash_node_t *current_node = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[index];

	while (current_node && strcmp(current_node->key, key) != 0)
		current_node = current_node->next;

	/* Update value if key exists */
	if (current_node)
	{
		free(current_node->value);
		current_node->value = strdup(value);
		return (1);
	}

	/* Add new node if key not found */
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
