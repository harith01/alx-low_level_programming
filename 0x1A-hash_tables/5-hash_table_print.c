#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - Print a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int long i;
	hash_node_t *current_node = NULL;
	char *comma = "";

	if (!ht)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			printf("%s'%s': '%s'", comma, current_node->key, current_node->value);
			comma = ", ";
			current_node = current_node->next;
		}
	}
	puts("}");
}
