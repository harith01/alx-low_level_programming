#include "lists.h"

/**
 * free_dlistint - Free a DLL
 * @head: POinter to the forst element in a DLL
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		free(tmp);
		head = head->next;
	}
}
