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
	listint_t *prev_node, *new_node, *ptr;

	if (*head == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	ptr = *head;
	while (ptr != NULL)
	{
		if (i == idx - 1)
		{
			prev_node = ptr->next;
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
