#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Pop the head of a list
 * @head: pointer to pointer to the head
 * Return: the popped element
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
