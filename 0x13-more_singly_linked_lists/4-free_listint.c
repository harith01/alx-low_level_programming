#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Free a linked list
 * @head: pointer to the first element
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
