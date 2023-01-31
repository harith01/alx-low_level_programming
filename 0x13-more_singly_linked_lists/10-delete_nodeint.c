#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete a node given its index
 * @head: pointer to pointer to the head
 * @index: index of the node to be deleted
 * Return: 1 if suceesful, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *del;
	unsigned int i;

	if (index == 0)
	{
		*head = (*head)->next;
		ptr->next = NULL;
		free(ptr);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}
	del = ptr->next;
	ptr->next = del->next;
	del->next = NULL;
	free(del);
	return (1);
}
