#include "lists.h"

/**
 * get_dnodeint_at_index - Get the n-th index
 * @head: pointer to the first element fo a DLL
 * @index: the position of the node
 * Return: the n-th node of DLL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int current_pos;

	if (head == NULL)
		return (NULL);

	current_node = head;
	current_pos = 0;

	while (current_node)
	{
		if (current_pos == index)
			return (current_node);
		current_pos++;
		current_node = current_node->next;
	}
	return (NULL);
}
