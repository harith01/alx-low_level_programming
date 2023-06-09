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
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *current_node;
	const char *value_dup;

	if (!key || key = "")
		return (0);
	value_dup = strdup(value);
	index = key_index((unsigned char *)key, ht->size);
	node = create_node(key, value_dup);
	current_node = ht->array[index];
	if (current_node == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	node->next = current_node;
	ht->array[index] = node;
	return (1);
}


/**
 * create_node - Create a node
 * @key: the key
 * @value: the value
 * Return: a pointer to the node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	node->key = malloc(strlen(key));
	node->value = malloc(strlen(value));
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	return (node);
}
