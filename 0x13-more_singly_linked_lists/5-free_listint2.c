#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Free list
 * @head: pointer to poiinter to head of list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
