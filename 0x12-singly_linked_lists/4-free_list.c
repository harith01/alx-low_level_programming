#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a linked list
 * @head: pointer to the head of the list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
