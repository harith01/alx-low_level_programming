#include "lists.h"

/**
 * delete_dnodeint_at_index -  Delete a node at a given index
 * @head: P2P to the beginning of a DLL
 * @index: the index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int current_pos = 0;

	if (*head == NULL)
		return (-1);
	
	if (index == 0)
	{
		*head = current_node->next;
		if (*head)
			(*head)->prev = NULL;
		free(current_node);
		current_node = NULL;
	}
	while (current_node)
	{
		if (current_pos == index)
			break;
		current_pos++;
		current_node = current_node->next;
	}
	if (current_node == NULL)
		return (-1);
	current_node->prev->next = current_node->next;
	current_node->next->prev = current_node->prev;
	free(current_node);
	return (1);
}
