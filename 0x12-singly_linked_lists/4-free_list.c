#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a linked list
 * @head: pointer to the head of the list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
