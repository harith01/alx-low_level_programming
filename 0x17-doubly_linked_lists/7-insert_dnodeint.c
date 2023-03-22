#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a given index
 * @h: Pointer to the first element of the DLL
 * @idx: the position of insertion
 * @n: the number to be inserted
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node, *next_node, *new_node;
	unsigned int current_pos;

	current_node = *h;
	current_pos = 0;
	while (current_node)
	{
		if (current_pos == idx)
			break;
		current_pos++;
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (NULL);

	next_node = current_node->next;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current_node->next = new_node;
	new_node->prev = current_node;
	new_node->next = next_node;
	next_node->prev = new_node;

	return (new_node);
}
