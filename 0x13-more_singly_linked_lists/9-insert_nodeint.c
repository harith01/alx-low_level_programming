#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a node at a given index
 * @head: pointer to pointer to head
 * @idx: index
 * @n: the data to be inserted
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *add_prev_node, *new_node, *ptr;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	ptr = *head;

	while (ptr != NULL)
	{
		if (i == idx - 1)
		{
			add_prev_node = ptr->next;
			break;
		}
		i++;
		ptr = ptr->next;
	}
	ptr->next = new_node;
	new_node->next = add_prev_node;

	if (new_node != NULL)
		return (new_node);
	else
		return (NULL);
}
